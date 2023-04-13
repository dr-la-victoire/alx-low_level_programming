#include "main.h"

/**
 * string_nconcat -  concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes
 *
 * Return:  point to a newly allocated space in memory, which contains s1,
 * followed by the first n bytes of s2, and null terminated or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1 = 0, len2 = 0, i, j, len;
	char *catstr;

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

	catstr = (char *)malloc(sizeof(*catstr) * len + 1);
	if (catstr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		catstr[i] = s1[i];
	for (j = 0; j < n; j++)
		catstr[j] = s2[j];
	catstr[len] = '\0';

	return (catstr);
}
