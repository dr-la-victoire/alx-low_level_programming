#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int s;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (temp = n, s = 0; (temp >>= 1) > 0; s++)
		;
	for (; s >= 0; s--)
	{
		if ((n >> s) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
