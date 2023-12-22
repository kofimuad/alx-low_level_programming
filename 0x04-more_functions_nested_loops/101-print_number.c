#include "main.h"
/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-'); /* prints minus sign for negative nums */
		n = -n; /* works for absolutes */
	}

	/* Recursively print the number excluding the last digit */
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	/* print the last digit */
	_putchar('0' + n % 10);
}
