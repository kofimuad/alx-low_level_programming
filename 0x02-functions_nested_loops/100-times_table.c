#include "main.h"
/**
 * print_times_table - prints the n times table
 *
 * @n: number times table (n  <=  15)
 *
 * Return: no return.
 */
void print_times_table(int n)
{
	int row;
	int col;
	int product;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			_putchar('0');
			for (col = 1; col <= n; col++)
			{
				product = row * col;
				_putchar(',');
				_putchar(' ');
				if (product < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + product);
				}
				else if (product < 100)
				{
					_putchar(' ');
					_putchar('0' + product / 10);
					_putchar('0' + product % 10);
				}
				else
				{
					_putchar('0' + (product / 100) % 10);
					_putchar('0' + (product / 10) % 10);
					_putchar('0' + product % 10);
				}
			}
			_putchar('\n');
		}
	}
}
