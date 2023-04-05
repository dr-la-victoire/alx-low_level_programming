#include "main.h"

int sqr_num(int num, int n);

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: the number
 *
 * Return: The natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (sqr_num(0, n));
}

/**
 * sqr_num - checks for the number
 * @num: the divisor
 * @n: the number divided
 *
 * Return: the divided result
 */

int sqr_num(int num, int n)
{
	if ((num * num) > n)
		return (-1);
	if ((num * num) == n)
		return (num);
	else
		return (sqr_num(++num, n));
}
