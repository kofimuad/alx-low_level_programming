#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of array
 * @c: stores chars
 *
 * Return: pointer to the array of chars.
 */
char *create_array(unsigned int size, char c)
{
	char *pr;
	unsigned int a;

	if (size == 0)
	{
		return (NULL);
	}

	pr = malloc(size * sizeof(c));

	if (pr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		pr[a] = c;
	}
	return (pr);
}
