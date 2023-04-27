#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: the argument count
 * @argv: an array containing the arguments
 *
 * Description: This program prints the minimum number of coins
 * to make change for an amount of money
 * Return: 0 (Success) or 1 (error)
 */

int main(int argc, char *argv[])
{
	int i, j = 2;
	int change[] = {25, 10, 5, 2, 1};
	int coins = 0;
	int coin_num = 5;
	int cent;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = coin_num - 1; i >= 0; i--)
	{
		while (j == argc)
		{
			cent = atoi(argv[j]);
		/*	if  (cent < 0)*/
		/*	{*/
		/*		printf("0\n");*/
		/*		return (0);*/
		/*	}*/
				while (cent >= change[i])
				{
					cent -= change[i];
					coins++;
				}
			j++;
		}
	}

	printf("%d\n", coins);

	return (0);
}
