#include "main.h"
/**
 * _isdigit - checks for a digit
 *
 * @c: digit input
 *
 * Return: 1 (If digit) 0 (If not)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
