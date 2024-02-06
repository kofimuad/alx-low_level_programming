#include "lists.h"
/**
 * list_len - Determine number of elements in
 *the linked list list_t
 *
 * @h: the start of the linked list
 *
 * Return: the number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
