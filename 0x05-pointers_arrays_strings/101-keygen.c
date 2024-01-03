#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
	int password_length = 8; /*Define the desired length of the password*/

	srand(time(NULL)); /*Seed the random number generator*/

	printf("Random Password: ");
	for (int i = 0; i < password_length; i++)
	{
		char random_char = 33 + rand() % 94; /* Gen. random char between 33 and 126*/

		printf("%c", random_char);
	}
	printf("\n");

	return (0);
}
