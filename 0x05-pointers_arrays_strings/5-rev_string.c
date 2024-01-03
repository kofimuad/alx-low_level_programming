#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string input
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int length = 0;
	int i;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i]; /* saves char at current position */
		s[i] = s[length - i - 1]; /* replaced by char from other end */
		s[length - i - 1] = temp; /*put s[i] at position swapped */
	}
}
