#include "3-calc.h"

/**
 * main - Entry Point
 * @argc: argument count
 * @argv: an array containing the arguments
 *
 * Description: This program performs simple calculations
 * Return: 0 (Success) or Error
 */

int main(int argc, char *argv[])
{
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = get_op_func(argv[2]);
	if (!op)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op(atoi(argv[1]), atoi(argv[3])));

	return (0);


}
