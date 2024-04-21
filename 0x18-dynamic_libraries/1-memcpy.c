#include "main.h"
/**
 * _memcpy - copies memory area
 * @n: number of bytes copied
 * @src: source memory area
 * @dest: destination memory area
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
