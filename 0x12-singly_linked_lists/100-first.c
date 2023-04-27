#include <stdio.h>

/**
 * print_before_main - a function that runs before the main function is
 * executed
 *
 * Return: Nothing
 */

void __attribute__((constructor)) print_before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
