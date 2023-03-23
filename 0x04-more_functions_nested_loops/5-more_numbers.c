#include "main.h"


/**
 * more_numbers - prints 0 - 14 10x
 *
 * Return: Nothing
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar(j / 10 + '0' + j % 10 + '0');
			else
				_putchar(j + '0');
		}

		_putchar('\n');
	}
}
