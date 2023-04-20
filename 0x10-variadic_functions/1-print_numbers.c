#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n:  the number of integers passed to the function
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;
	int store;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		store = va_arg(num, int);
		printf("%d", store);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}

	printf("\n");
}
