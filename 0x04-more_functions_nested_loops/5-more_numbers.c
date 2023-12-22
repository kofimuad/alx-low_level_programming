#include "main.h"
/**
 * more_numbers - prints 10 times of 0 - 14
 *
 * Return: Nothing.
 */
void more_numbers(void)
{
	int count;
	int num;

	for (count = 0; a < 10; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar('0' + num / 10);
			}
			_putchar('0' + num % 10);
		}
		_putchar('\n');
	}
}
