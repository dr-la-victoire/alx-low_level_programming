#include "main.h"

/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: the argument count
 * @av: the argument array
 *
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i;
	char *new_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	new_str = malloc(sizeof(char *) * ac);
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		new_str[i] = malloc(sizeof(char *) * 100);

	if (new_str[i] == NULL)
	{
		free(new_str);
		for (i = 0; i < ac; i++)
			free(new_str[i]);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
		new_str[i] = av[i];

	return (new_str);
}
