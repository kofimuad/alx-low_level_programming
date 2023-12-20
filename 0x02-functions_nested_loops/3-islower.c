#include "main.h"
/**
 * _islower - a function that checks for lowercase letters.
 *
 * @c: The character in ASCII code
 *
 * Return: 1 (lowercase) and 0 (rest)
 */
int _islower(int c)
{
	if (c <= 97 && c >= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
