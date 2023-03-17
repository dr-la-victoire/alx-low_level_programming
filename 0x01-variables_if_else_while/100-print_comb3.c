#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: This program prints all possible combo of two digits
 * Return: 0 (Success)
 */

int main(void)
{
	int a;
	int b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 49; b<= 57; b++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				if (a != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
