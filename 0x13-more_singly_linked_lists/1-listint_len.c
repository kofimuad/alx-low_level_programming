#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements
 * in a listint_t list
 *
 * @h: the beginning of the list
 *
 * Return: the number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
