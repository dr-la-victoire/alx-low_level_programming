#include <stdio.h>

/**
 * main - Entry Point
 * @argc: the argument count
 * @argv: an array of the arguments
 *
 * Description: This program prints its name
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (i == 0)
			printf("%s\n", argv[0]);
	}

	return (0);
}
