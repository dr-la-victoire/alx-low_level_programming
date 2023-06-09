#include <stdio.h>

/**
 * main - Entry Point
 *
 * Descriptioin: This function prints the sizes of various data types in C
 * Return: 0 (Success)
 */

int main(void)
{
	int char_size = sizeof(char);
	int int_size = sizeof(int);
	int float_size = sizeof(float);
	int long_int = sizeof(long int);
	int long_long_int = sizeof(long long int);

	printf("Size of a char: %d byte(s)\n", char_size);
	printf("Size of an int: %d byte(s)\n", int_size);
	printf("Size of a long int: %d byte(s)\n", long_int);
	printf("Size of a long long int: %d byte(s)\n", long_long_int);
	printf("Size of a float: %d byte(s)\n", float_size);

	return (0);
}
