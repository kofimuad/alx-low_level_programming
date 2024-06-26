#include "lists.h"
/**
 * add_dnodeint_end - adds new node to the end of dlistint_t list
 * @head: the beginnging of dlistint_t list
 * @n: int to be stored in new node
 *
 * Return: Null if malloc fails otherwise address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;

	last->next = new;
	new->prev = last;

	return (new);
}
