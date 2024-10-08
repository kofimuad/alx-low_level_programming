#include "hash_tables.h"

/**
 * hash_table_get - gets the value in a node for a specific key
 * @ht: pointer to the hash table to search.
 * @key: the key associated with the value.
 *
 * Return: If no value stored NULL
 *	   Otherwise: value stored.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
