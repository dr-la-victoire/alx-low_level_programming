#include <stdio.h>

/**
 * main - Entry Point
 * @argc: the argument count
 * @argv: an array of the arguments passed
 *
 * Description: A program that multiplies two integers
 * Return: 0 (Success) or 1 (error)
 */

int main(int argc, char *argv[])
{
	int i, a, b;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			if (i == 1)
				a = argv[i];
			if (i == 2)
				b = argv[i];
		}

		printf("%d\n", a * b);
	}

	return (0);
}
