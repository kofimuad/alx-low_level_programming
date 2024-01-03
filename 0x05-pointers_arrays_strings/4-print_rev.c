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

	for (int i = length; i > 0; i--)
	{
		_putchar(s[i - 1]);
	}
	_putchar('\n');
}
