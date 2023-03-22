#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: This program prints the sum of the even valued terms
 * in the Fibonacci sequence
 * Return: 0  (Success)
 */

int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int next;
	unsigned long int i;
	unsigned long int sum = 0;

	for (i = 0; i < 4000000; i++)
	{
		a = b;
		b = next;
		next = a + b;

		if (next % 2 == 0)
		{
			sum = sum + next;
		}
	}

	printf("%lu\n", sum);

	return (0);
}
