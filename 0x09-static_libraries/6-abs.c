#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer
 *
 * Return: the integer
 */

int _abs(int n)
{
	int i;

	if (n < 0)
	{
		i = n * -1;
		return (i);
	}
	else if (n > 0)
	{
		i = n * 1;
		return (i);
	}
	else
		return (n);
}
