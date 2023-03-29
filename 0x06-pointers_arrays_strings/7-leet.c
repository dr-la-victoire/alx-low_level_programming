#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the string
 *
 * Return: An encoded string
 */

char *leet(char *s)
{
	char special[] = {'A', 'E', 'O', 'T', 'L'};
	char replace[] = {'4', '3', '0', '7', '1'};
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		for (j = 0; special[j] < 5; j++)
		{
			if (s[i] == special[j])
			{
				s[i] = replace[j];
			}
		}
		s[i]++;
	}

	return (s);
}
