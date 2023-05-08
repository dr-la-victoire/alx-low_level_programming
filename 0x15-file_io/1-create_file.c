#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to be created
 * @text_content: string to write to the file
 *
 * Return: 1 (Success) or -1 (Failure)
 */

int create_file(const char *filename, char *text_content)
{
	char *text;
	ssize_t o, w;
	int len = 0;

	if (filename == NULL)
		return (-1);

	while (*text_content != '\0')
	{
		len++;
		text_content++;
	}

	text = malloc(sizeof(char) * len + 1);
	o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	w = write(STDOUT_FILENO, text, len + 1);

	if (o == -1 || w == -1)
	{
		free(text);
		return (-1);
	}

	free(text);
	close(o);
	return (-1);
}
