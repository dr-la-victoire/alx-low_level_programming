#include <stdio.h>

/**
 * main - Entry Point
 * @argc: the argument count
 * @argv: n array that contains the arguments passed
 *
 * Description: This program prints all the arguments passed to it
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
