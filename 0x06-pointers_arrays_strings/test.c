#include <stdio.h>
#include <string.h>

/**
 * main - test code
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *newstring;

	newstring = strcat(s1, s2);
	printf("%s\n", newstring);

	return (0);

}
