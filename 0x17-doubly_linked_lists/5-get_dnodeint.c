#include "lists.h"
/**
 * get_dnodeint_at_index - find the node
 * @head: start of the dlistint_t list
 * @index: position to find the node
 *
 * Return: NULL if not found otherwise node found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
