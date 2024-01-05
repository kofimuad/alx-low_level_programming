#include "main.h"
/**
 * _strcat - concatenate a string
 *
 * @dest: first string
 * @src: appended string (second string)
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src[i] != '\0') /* Append src to dest */
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
