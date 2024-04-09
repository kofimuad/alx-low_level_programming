#include "lists.h"
/**
 * sum_dlistint - adds up all data of dlistint_t list
 * @head: the beginning of dlistint_t list
 * Return: sum of all nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
