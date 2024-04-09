#include "lists.h"
/**
 * free_dlistint - free the dlistint_t list
 * @head: the beginning go the dlistint_t list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		tmp = head;
	}
}
