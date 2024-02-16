#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - a function that converts from binary to unsigned int
 * @b: 1 or 0 character to be converted.
 * Return: The converted unsigned int.
 *         return 0 if b == NULL.
 *         return 0 if b is neither 0 nor 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	int i;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}

	num = num << 1;

	if (b[i] == '1')
		num = num + 1;

	return (num);
}
