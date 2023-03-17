#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: This program prints the digits of the hexadecimal system
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	int a;

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (a = 97; a <= 102; a++)
		putchar(a);

	putchar('\n');
	return (0);
}
