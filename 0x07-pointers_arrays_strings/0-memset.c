#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: amount of byte filled
 * Return: pointer to dest (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int n;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
