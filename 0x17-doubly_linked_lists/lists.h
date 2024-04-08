#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_t - doubly linked list
 * @n: integer
 * @next: points to next node
 * @prev: points to previous node
 */
typedef struct dlistint_t
{
	int n;
	struct dlistint_t *prev;
	struct dlistint_t *next;
}dlistint_t;

/* Prototypes */
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);

#endif /* LIST_H */
