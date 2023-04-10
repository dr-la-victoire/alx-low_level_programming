#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: the argument count
 * @argv: an array containing the arguments
 *
 * Description: This program prints the sum of integers
 * Return: 0 (Success) or 1 (Error)
 */

int main(int argc, char *argv[])
{
	int i, num;
	int sum = 0;
	char *ptrend;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		num = strtol(argv[i], &ptrend, 10);

		if (*ptrend)
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
