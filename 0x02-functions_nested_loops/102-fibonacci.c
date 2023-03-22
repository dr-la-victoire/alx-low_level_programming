#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: This program prints the first 50 fibonacci sequence numbers
 * Return: 0 (Success)
 */

int main(void)
{
	int b = 2;
	int c, d;

	for (c = 3; c <= 50; c++)
	{
		d = c + b;
		b = d;
		c = b;
		printf("%d, ", d);
	}
	return (0);
}
