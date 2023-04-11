#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: the string
 *
 * Return: a pointer to the newly allocated memory space
 */

char *_strdup(char *str)
{
	char *new_str;
	unsigned int len = 0;

	while (*str)
	{
		len++;
		str++;
	}

	if (str == NULL)
		return (NULL);

	new_str = (char *)malloc(sizeof(char) * len + 1);

	if (new_str == NULL)
		return (NULL);
	while (*str)
		*new_str = *str;

	*new_str = '\0';

	return (new_str);
}
