#include "main.h"

/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a newly allocated space in memory which contains the
 * concatenated string or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, j = 0, len1 = 0, len2 = 0, len;
	char *new_str;

	if (s1 != NULL)
	{
		i = 0;

		while (s1[i] != '\0')
		{
			len1++;
			i++;
		}
	}
	
	if (s2 != NULL)
	{
		i = 0;

		while (s2[i] != '\0')
		{
			len2++;
			i++;
		}
	}

	len = len1 + len2;

	new_str = (char *)malloc(sizeof(*new_str) * (len + 1));

	if (new_str == NULL)
		return (NULL);
	
	for (i = 0; i < len1; i++)
	{
		new_str[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		new_str[j] = s2[j];
	}

	new_str[len] = '\0';

	return (new_str);
}
