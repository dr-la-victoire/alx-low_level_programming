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
	int shift;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (temp = n, shift = 0; (temp >>= 1) > 0; shift++)
		;
	for (; shift >= 0; shift--)
	{
		if ((n >> shift) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
