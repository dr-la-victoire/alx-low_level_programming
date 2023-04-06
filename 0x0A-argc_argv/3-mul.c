#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: the argument count
 * @argv: an array that contains the arguments passed
 *
 * Description: This program multiplies two int arguments
 * Return: 0 (Success) or 1 (Error)
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		printf("%d\n", a * b);
	}

	return (0);
}
