#include "variadic_functions.h"

/**
 * sum_them_all - adds all its parameters
 * @n: mandatory argument
 *
 * Return: the sum of all the parameters
 */

int sum_them_all(unsigned int n, ...)
{
	va_list nums;
	int sum = 0, num;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(nums, int);
		sum += num;
	}

	va_end(nums);

	return (sum);
}
