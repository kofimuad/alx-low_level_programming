#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: (0)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int args = argc - 1;

	printf("%d\n", args);

	return (0);
}
