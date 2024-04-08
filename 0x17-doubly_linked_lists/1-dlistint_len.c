#include "lists.h"

/**
 * dlistint_len - lists the number of elements
 * @h: the head where the count starts
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
