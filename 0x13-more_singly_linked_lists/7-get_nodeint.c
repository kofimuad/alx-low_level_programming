#include "lists.h"
/**
 * get_nodeint_at_index - gets the nth node of a listint_t list
 * @head: the beginning of the list
 * @index: index of node from 0
 *
 * Return: NULL if list is empty otherwise the nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);


		head = head->next;
	}

	return (head);
}
