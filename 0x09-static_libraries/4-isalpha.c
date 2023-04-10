#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the char to be checked
 *
 * Return: 1 (if c is a letter) or 0 (otherwise)
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}