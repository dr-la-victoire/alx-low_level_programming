#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: This program prints the alphabet in lowercase
 * except q and e
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 101)
			continue;
		if (i == 113)
			continue;
		putchar(i);
	}

	putchar('\n');
	return (0);
}
