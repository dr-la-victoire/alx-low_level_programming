#include "main.h"

/**
 * read_textfile -  reads a text file and prints it#
 * to the POSIX standard output
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 *
 * Return: the number of letters it actually reads and prints
 * or 0 (Failure)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text;
	ssize_t o, r, w;

	if (filename == NULL)
		return (0);
	text = malloc(sizeof(char) * letters);
	if (text == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, text, letters);
	w = write(STDOUT_FILENO, text, r);
	
	if (o == -1 || r == -1)
	{
		free(text);
		return (0);
	}

	free(text);
	close(o);
	return (w);	
}
