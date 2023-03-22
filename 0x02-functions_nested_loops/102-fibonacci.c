#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: This program prints the first 50 Fibonacci numbers
 * Return: 0 (Success)
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	long int i;
	long int c = a + b;

	printf("%ld, %ld, ", a, b);
	for (i = 3; i <= 50; i++)
	{
		if (i != 50)
		{
			printf("%ld, ", c);
			a = b;
			b = c;
			c = a + b;
		}
		else
		{
			printf("%ld\n", c);
		}
	}

	return (0);
}
