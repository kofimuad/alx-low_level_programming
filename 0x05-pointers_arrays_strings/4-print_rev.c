#include "main.h"
/**
 * print_rev - prints a string in reverse.
 *
 * @s: The string in question.
 */
void print_rev(char *s)
{
	int length = _strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
