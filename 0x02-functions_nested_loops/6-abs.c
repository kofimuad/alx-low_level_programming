#include "main.h"
/**
 * _abs - computes the absolute value of an interger
 *
 * @int: interger to be computed in this case is in the variable r
 *
 * Return: Always r (Success)
 */
int _abs(int)
{
	int r;

	if (r < 0)
	{
		return (r * -1);
	}
	return (r);
	_putchar('\n');
}