#include "lists.h"
/**
 * sum_listint - sums the data (n) of a listint_t int
 * @head: the beginning of the list
 *
 * Return: Return 0 if list is empty otherwise sum of data (n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = head->n;
		head = head->next;
	}
	return (sum);
}
