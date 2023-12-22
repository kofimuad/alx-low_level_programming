#include <stdio.h>
#include <math.h>
/**
 * main - start point
 *
 * Return: 0
 */
int main(void)
{
	long number = 612852475143;
	long largest_prime = 2;
	long factor;

	/* remove all factors of 2 */
	while (number % 2 == 0)
	{
		largest_prime = 2;
		number = number / 2;
	}
	/* Check for odd factors */

	for (factor = 3; factor <= sqrt(number); factor = factor + 2)
	{
		while (number % factor == 0)
		{
			largest_prime = factor;
			number = number / factor;
		}
	}

	if (number > 2)
	{
		largest_prime = number;
	}

	printf("%ld\n", largest_prime);
	return (0);
}
