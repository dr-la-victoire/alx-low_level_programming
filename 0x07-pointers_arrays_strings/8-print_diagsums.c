#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers
 * @a: the array name
 * @size: the size of the array
 *
 * Return: Nothing
 */

void print_diagsums(int a[], int size)
{
	int i, j;
	int left = 0;
	int right = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				left += a[i][j];
			}
			else if ((i + j) == (size - 1))
			{
				right += a[i][j];
			}
		}
	}

	printf("%d, %d\n", left, right);
}
