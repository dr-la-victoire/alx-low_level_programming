#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: the string
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i = 0;
	int last_char;
	int len = 0;
	int j;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	last_char = len - 1;

	for (j = last_char; j >= s[i]; j--)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

