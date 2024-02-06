#include <lists.h>
#include <stdio.h>
/**
 * print_listint - prints the list of elements
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
