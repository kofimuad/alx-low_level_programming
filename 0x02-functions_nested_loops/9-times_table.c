#include "main.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int row;
	int col;
	int product;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			int product = row * col;

			/* handling the space requirement*/
			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (product < 10)
				{
					_putchar(' ');
				}
			}
			/* how to handling the output*/
			if (product >= 10)
			{
				_putchar('0' + product / 10);
				_putchar('0' + product % 10);
			}
			else
			{
				_putchar('0' + product);
			}
		}
	}
	_putchar('\n');
}
