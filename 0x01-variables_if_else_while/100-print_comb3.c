#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 8; a++)
	{
		for (b = a + 1; b <= 9; b++) /*number greater than 'a' so it can ascend*/
		{
			putchar('0' + a);
			putchar('0' + b);
			if (!(a == 8 && b == 9)) /*Checks if program is at the end of the loop*/
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
