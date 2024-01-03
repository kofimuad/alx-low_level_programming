#include "main.h"
/**
 * puts_half - prints half of a string
 *
 * @str: the string
 * Return: nothing
 */
void puts_half(char *str)
{
	int length = 0;
	int start;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	/* Declare the start point */
	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length - 1) / 2;
	}

	for (i = start; i < length; i++) /* prints second half of string */
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
