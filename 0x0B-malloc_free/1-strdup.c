#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to the newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer to the array of chars.
 */
char *_strdup(char *str)
{
	char *sout;
	unsigned int i;
	unsigned int j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		;

	sout = (char *)malloc((i + 1) * sizeof(char));

	if (sout == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		sout[j] = str[j];

	return (sout);
}
