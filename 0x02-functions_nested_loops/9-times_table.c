#include "main.h"

/**
 * times_table - prints the 9 times table starting from 0
 *
 * Return: Nothing
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j != 9 && (i * j <= 9))
			{
				k = i * j;
				_putchar(k + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (j != 9 && (i * j >= 9))
			{
				k = i * j;
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (j == 9)
			{
				k = i * j;
				if (k <= 9)
					_putchar(k + '0');
				else
				{
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
				}
			}
		}
		_putchar('\n');
	}
}
