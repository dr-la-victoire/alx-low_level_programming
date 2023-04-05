#include "main.h"
int checks_palindrome(char *s, int i, int j);
int _strlen(char *s);

/**
 * is_palindrome - checks whether or not a string is a palindrome
 * @s: the string
 *
 * Return: 1 if s is a palindrome or 0 if otherwise
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (checks_palindrome(s, 0, _strlen(s)));
}

/**
 * forward - checks the forward string
 * @s: the string
 *
 * Return:
 */

int checks_palindrome(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	else if (s[i] != s[j])
		return (0);
	else
		return (checks_palindrome(s, i++, j--));
}

/**
 * _strlen - finds the length of a string
 * @s: the string
 *
 * Return: the length
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen(s + 1));
}

