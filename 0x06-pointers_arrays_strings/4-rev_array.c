#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers
 * @a: the array
 * @n: the number of elements in the array
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int b = 0;

	for (i = n - 1; a[i] >= a[0]; i--)
	{
		a[b] = a[i];
		b++;
	}
}
