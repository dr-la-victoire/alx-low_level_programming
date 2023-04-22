#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0, flag;
	char *str;
	va_list print;

	va_start(print, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(print, int));
				flag = 0;
				break;
			case 'i':
				printf("%d", va_arg(print, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(print, double));
				flag = 0;
				break;
			case 's':
				str = va_arg(print, char *);
				if (str == NULL)
					printf("(nil)");
				printf("%s", str);
			       	flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
}
