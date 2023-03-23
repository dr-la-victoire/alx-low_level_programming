#include "main.h"

/**
 * print_triangle - draws a triangle
 * @size: the triangle size
 *
 * Return: Nothing
 */

void print_triangle(int size)
{
	int space, row, block;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 0; row < size; row++)
		{
			for (space = 0; space < block; space++)
			{
				for (block = 0; block < size; block++)
				{
					_putchar('#');
				}
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
