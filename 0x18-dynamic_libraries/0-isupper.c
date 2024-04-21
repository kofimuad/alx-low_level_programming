#include "main.h"

/**
 * _isupper - checks if the input is an uppercase
 *
 * @c: character inputted
 *
 * Return: 1 (True) 0 (False)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
