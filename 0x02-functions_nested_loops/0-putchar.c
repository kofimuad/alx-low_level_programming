#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char msg[] = "_putchar"; /*this is our string, null terminated*/

	int i = 0; /*our loop variable*/

	while (msg[i] != '\0') /*loops through all characters from _ to r*/
	{
		putchar(msg[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
