#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 *
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int last_digit;
	int new_n;

	if (n < 0)
	{
		new_n = n * -1;
		last_digit = new_n % 10;
	}
	else
		last_digit = n % 10;
	_putchar(last_digit + '0');

	return (last_digit);
}
