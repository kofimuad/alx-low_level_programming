#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @n: string array
 *
 * Return: Always 0. (Success)
 */

char *leet(char *n)
{
	int i, x;
	int letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replacerNums[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (n[i] == letters[x])
			{
				n[i] = replacerNums[x / 2];
				x = 9;
			}
		}
	}
	return (n);
}

