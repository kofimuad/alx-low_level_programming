#include "main.h"
/**
 * _strpbrk - searches a string for a set of bytes
 * @s: string to be searched
 * @accept: string for comparing
 * Return: pointer to the matched byte
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
