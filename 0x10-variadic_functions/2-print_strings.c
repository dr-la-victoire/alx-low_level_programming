#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *str_store;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		str_store = va_arg(str, char *);
		if (str_store == NULL)
			printf("(nil)");
		else
			printf("%s", str_store);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
