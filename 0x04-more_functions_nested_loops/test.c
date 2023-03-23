#include <stdio.h>

/**
 * main - Entry Point
 * 
 * Description: Test program
 * Return: 0 (Success)
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(' ');
			for (k = 0; k >= j; k++)
			{
				putchar('#');
			}
		}
		putchar('\n');
	}

	return (0);
}
