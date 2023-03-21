#include "main.h"

/**
 * main - Entry Point
 *
 * Description: This program prints "_putchar"
 * Return: 0 (Success)
 */

int main(void)
{
	char func[20] = "_putchar";
	int i;

	for (i = 0; i <= 8; i++)
		_putchar(func[i]);


	return (0);
}
