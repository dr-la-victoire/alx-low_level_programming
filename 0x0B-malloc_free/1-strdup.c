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
	int i = 0;
	char *new_str;
	int len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	if (!str)
		return (NULL);

	new_str = (char *)malloc(sizeof(*new_str) * len + 1);

	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		new_str[i] = str[i];

	new_str[i] = '\0';

	return (new_str);
}
