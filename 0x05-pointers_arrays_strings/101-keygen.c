#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry Point
 *
 * Description: This program generates random valid passwords
 * for a crackme program
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	char password[];
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	char LETTERS[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char specials[] = "!@#$^&*?";
	char numbers[] = "0123456789";

	srand(time(NULL));
	for (i = 0;
}
