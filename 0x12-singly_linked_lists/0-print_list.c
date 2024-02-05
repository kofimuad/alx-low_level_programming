#include <stdio.h>
#include "list.h"
/**
 * print_list - prints all the elemets of a list_t list
 * @h: head of list_t
 *
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		nodes++;
	}
	return (nodes);
}
