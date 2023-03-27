#include "main.h"

/**
 * puts_half -  prints half of a string
 * @str: the string
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i = 0;
	int len = 0;
	int char_no;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	char_no = len;

	if (char_no % 2 == 0)
	{
		for (i = char_no / 2; i < char_no; i++)
			_putchar(str[i]);
	}
	else
		for (i = (char_no - 1 / 2); i < char_no; i++)
			_putchar(str[i]);
	_putchar('\n');
}
