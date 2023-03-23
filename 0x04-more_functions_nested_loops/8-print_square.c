#include "main.h"

/**
 * print_square - prints a square
 * @size: the size of the square
 *
 * Return: Nothing
 */

void print_square(int size)
{
	int row;
	int collumn;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 0; row < size; row++)
		{
			for (collumn = 0; collumn < size; collumn++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

	/*if (size > 0 )*/
		/*_putchar('\n');*/
}
