#include "main.h"
/**
 * _strspn - gets the length of the prefix of a substring
 * @s: initial segment
 * @accept: accepted bytes
 * Return: the number of accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i;
	int j;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		length++;
	}
	return (length);
}
