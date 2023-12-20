#include "main.h"
/**
 * print_last_digit - prints the last digit of a a number
 *
 * @n: the value whose last digit is to be found
 *
 * Return: last_digit (Success)
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
