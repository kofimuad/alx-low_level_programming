#include "main.h"
/**
 * get_bit - gets the bit at a specified index
 * @n: the bit
 * @index: the index
 * Return: -1 if error otherwise the value at the index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
