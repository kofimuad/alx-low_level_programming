#include "main.h"
/**
 * _strncat - concatenates src to dest up to n characters
 * @dest: first string
 * @src: concatenated string (second string)
 * @n: the threshold
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '0')
	{
		dest_len++;
	}
	while (i < n)
	{
		dest[dest_len] = src[i];
		if src[i] == '\0'
		{
			break;
		}
		dest_len++;
		i++;
	}
	return (dest);
}
