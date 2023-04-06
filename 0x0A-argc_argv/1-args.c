#include <stdio.h>

/**
 * main - Entry Point
 * @argc: the argument count
 * @argv: the number of arguments
 *
 * Description: This program prints the number of arguments passed
 * to it
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	int num = 0;
	(void) argv;

	for (i = 0; i < argc - 1; i++)
	{
		num++;
	}

	printf("%d\n", num);

	return (0);
}
