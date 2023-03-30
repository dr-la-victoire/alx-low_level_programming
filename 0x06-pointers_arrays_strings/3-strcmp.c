#include "main.h"

/**
 * _strcmp -  compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 1 if strings are equal or 0 otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int i, 
	int value;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
		{
			value = s1[i] - s2[i];
		}
	}
}
