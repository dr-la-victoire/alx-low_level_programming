#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes
 *
 * Return: point to a newly allocated space in memory, which contains s1,
 * followed by the first n bytes of s2, and null terminated or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_concat;
	unsigned int i, j, len1 = 0, len2 = 0;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;
	str_concat = (char *)malloc(len1 + n + 1);
	if (str_concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str_concat[i] = s1[i];
	for (j = 0; j < n; j++)
		str_concat[i + j] = s2[j];

	str_concat[i + j] = '\0';

	return (str_concat);
}
