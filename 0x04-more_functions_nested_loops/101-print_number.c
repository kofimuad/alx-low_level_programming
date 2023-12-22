#include "main.h"
/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int num_abs;
	unsigned int divisor;
	unsigned int temp_num;

	if (n < 0)
	{
		_putchar('-');
		num_abs = -n;
	}
	else
	{
		num_abs = n;
	}

	temp_num = num_abs;
	divisor = 1;

	while (temp_num > 9)
	{
		temp_num /= 10;
		divisor *= 10;
	}

	while (divisor >= 1)
	{
		_putchar(((num_abs / divisor) % 10) + '0');
		divisor /= 10;
	}
}
