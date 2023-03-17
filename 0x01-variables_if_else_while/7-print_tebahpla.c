#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: This program prints the alphabet in reverse
 * Return: 0 (Success)
 */

int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}

	putchar('\n');
	return (0);
}
