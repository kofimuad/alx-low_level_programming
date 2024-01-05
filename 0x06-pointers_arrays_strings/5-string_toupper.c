#include "main.h"
/**
 * string_toupper - converts lowercase to uppercase
 * @str: the string to be converted
 * Return: converted string (str)
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if str[i] >= 'a' && str[i] <= 'z'
		{
			str[i] = str[i] - 'a' + 'A';
		}
		i++;
	}
	return (str);
}
