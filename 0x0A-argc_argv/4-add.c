#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry Point
 * @argc: the argument count
 * @argv: an array containing the arguments passed
 *
 * Description: This program adds positive numbers
 * Return: 0 (Success) or 1 (Error)
 */

int main(int argc, char *argv[])
{
	int i;
	int first_sum;
	int sum = 0;

	for (i = 0; i < argc; i++)
	{
		first_sum = atoi(argv[i]);

		if (isdigit(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += first_sum;
		}
	}

	printf("%d\n", sum);

	return (0);
}
