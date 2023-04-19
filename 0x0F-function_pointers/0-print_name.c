#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name
 * @f: the function pointer to the name
 *
 * Return: Nothing
 */

void f(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

