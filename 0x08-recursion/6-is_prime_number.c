#include "main.h"

int check_for_prime(int i, int n);

/**
 * is_prime_number - checks whether or not an input is a prime number
 * @n: the given input to check
 *
 * Return: 1 if n is a prime number or 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (check_for_prime(2, n));
}

/**
 * check_for_prime - checks for prime number
 * @i: the counter
 * @n: the number
 *
 * Return: the prime number
 */

int check_for_prime(int i, int n)
{
	if (i == n)
		return (1);
	else if ((n % i) == 0)
		return (0);
	else
		return (check_for_prime(++i, n));
}
