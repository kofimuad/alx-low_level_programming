#include "lists.h"
/**
 * pop_listint - deletes the head of a lisint_t list
 * @head: the beginning of the listint_t list
 *
 * Return: 0 if head is NULL other the data (n)
 * contained in the head.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
