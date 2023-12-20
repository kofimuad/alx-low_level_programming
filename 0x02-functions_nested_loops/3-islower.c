#include "main.h"
/**
 * _islower - a function that checks for lowercase letters.
 *
 * Return: 1 (Success) and 0 (Failure)
 */
int _islower(int c)
{
	if (c <= 'a' && c >= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
