#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: This program prints the single digits of base 10 numbers
 * Return: 0 (Success)
 */

int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}

	putchar('\n');
	return (0);
}
