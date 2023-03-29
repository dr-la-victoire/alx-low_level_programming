#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: the array
 * @n: the number of elements
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int rev;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		rev = a[i];
		a[i] = a[j];
		a[j--] = rev;
	}
}
