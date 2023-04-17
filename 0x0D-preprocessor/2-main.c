#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 *
 * Description: This program prints the name of the file it was compiled from
 * Return: 0 (Success)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
