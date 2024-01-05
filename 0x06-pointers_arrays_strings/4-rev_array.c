#include "main.h"
/**
 * reverse_array - reverse the content of an 
 * array of integers
 * @a: arry
 * @n: number of elements in the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;
	int j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[i] = temp;
	}
}
