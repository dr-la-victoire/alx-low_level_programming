#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: This program prints the first 50 prime numbers
 * Return: 0 (Success)
 */

int main(void)
{
	int i, j, prime;

	for (i = 2; i <= 50; i++)
	{
		prime = 0;
		for (j = 0; j <= 50; j++)
		{
			if (i > j && i % j == 0)
				continue;
			else
				prime++;
		}
		if (prime == 2)
			printf("%d ", i);
	}

	/*printf("%d ,", prime);*/
	return (0);
}
