#include <unistd.h>

/**
 * _putchar - prints a char to stdout
 * @c: the char to be printed
 *
 * Return: 1 (Success) or -1 (Error)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
