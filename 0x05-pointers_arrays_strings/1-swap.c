#include "main.h"
/**
 * swap_int - a function that swaps the value of two integers
 *
 * @a: first int
 * @b: second int
 */
void swap_int(int *a, int *b)
{
	int temp = *a; /* this stores the orginal value of *a */
	*a = *b;
	*b = temp;
}
