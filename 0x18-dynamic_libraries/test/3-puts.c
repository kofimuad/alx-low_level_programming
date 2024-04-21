#include "main.h"
/**
 * _puts - prints a string in stdout without using stdlib
 *
 * @str: pointer that stores a address to the string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
