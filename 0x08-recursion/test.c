#include "main.h"

/**
 * main - check code
 *
 * Return: 0
 */

int main(void)
{
	float n = 25.0;
	float value;

	for (float i = 0; i < n; i++)
	{
		value = n / i;

		if (value == i)
			printf("%f is the square root of %f\n", i, n);
	}

	return (0);
}
