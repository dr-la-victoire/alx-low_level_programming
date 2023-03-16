#include <unistd.h>
#include <string.h>

/**
 * main - Entry Point
 *
 * Description: This program prnts to stderr
 * Return: 1 (Success) or -1 (Error)
 */

int main(void)
{
	char buf[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, &buf, strlen(buf));

	return (1);
}
