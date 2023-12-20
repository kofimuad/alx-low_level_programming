#include "main.h"
/**
 * _isalpha - checks with character entered is an alphabet.
 *
 * @c: The character in the ascii code
 *
 * Return: 1 (alphabets) 0 (others)
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
