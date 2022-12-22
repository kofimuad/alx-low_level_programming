#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	char s1[1000], s2[1000];
	int i, c = 0;

	printf("Enter string1: \n");
	gets(s1);
	printf("Enter string2: \n");
	gets(s2);
	if (strcmp(s1) == strcmp(s2))
	{
		for (i = 0; s2[i] != '\0'; i++)
		{
			if (s1[i] == s2[i])
				c++;
		}

		if (c == i)
			printf("stings are equal");
		else
			printf("strings are not equal");
	}
	else
		printg("strings are not equal");

	return (0);
}

