#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: This program replaces multiples of 3 with "Fizz", multiples of
 * 5 with "Buzz" and multiples of both 3 & 5 with "FizzBuzz"
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}

	putchar('\n');

	return (0);
}
