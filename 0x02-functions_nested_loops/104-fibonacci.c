#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */

int main(void)
{
	long long i, n1 = 1, n2 = 2, next;
	printf("%lld, %lld", n1, n2);
	for (i = 2; i < 98; i++)
	{
		next = n1 + n2;
		printf(", %lld", next);
		n1 = n2;
		n2 = next;
	}
	printf("\n");

	return (0);
}
