#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: This program prints every single combo of two digit numbers
 * Return: 0 (Success)
 */

int main(void)
{
	int a, b;

	for (a = 48; a <= 51; a++)
	{
		putchar(a);
		for (b = 49; b <= 51; b++)
		{
			putchar(a);
			putchar(' ');
			putchar(a);
			putchar(b);
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
