#include "main.h"
/**
 * _strcmp - compares 2 strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if s1 and s2 are equal and
 * another number if they are not.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((int)(*s1 - *s2));
}
