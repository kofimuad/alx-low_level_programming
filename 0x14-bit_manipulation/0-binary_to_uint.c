#include "main.h"

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
	unsigned int mult = 1;
	int len;

	if (b == '\0')
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len = len - 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		num +=(b[len] - '0') * mult;
		mult = mult * 2;
	}

	return (num);
}
