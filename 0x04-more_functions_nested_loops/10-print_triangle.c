#include "main.h"

/**
 * print_triangle - draws a triangle
 * @size: the size of the triangle
 *
 * Return: Nothing
 */

void print_triangle(int size)
{
	int row, block, space;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 0; row <= size; row++)
		{
			for (space = size - row; space >= 1; space--)
				_putchar(' ');
			for (block = 1; block <= row; block++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
