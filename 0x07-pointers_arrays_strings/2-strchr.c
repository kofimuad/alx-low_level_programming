#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to be looked at
 * @c: character to be located
 * Return: s (addrees of character found), NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
