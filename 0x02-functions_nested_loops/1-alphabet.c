#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}
/**
 * print_alphabet - prints "alphabets"
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
}
