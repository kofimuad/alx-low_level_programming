#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to be looked at
 * @c: character to be located
 * Return: s (addrees of character found), NULL if not found
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s[i]);
		}
	}
	if (s[i] == c)
		return (s[i]);
	return ('\0');
}
