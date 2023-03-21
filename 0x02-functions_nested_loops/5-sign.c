#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number
 *
 * Return: 1 (positive), 0 (zero) or -1 (negative)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
