#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: This program prints all possible combo of 2 digit numbers
 * Return: 0 (Success)
 */

int main(void)
{
	int a, b, c;

	for (a = 48; a <= 55; a++)
	{
		for (b = 49; b <= 56; b++)
		{
			for (c = 50; c <= 57; c++)
			{
				if (c > b && c > a && b > a)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
