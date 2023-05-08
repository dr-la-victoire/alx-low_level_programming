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
	int fd, w;
	int len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	while (*text_content != '\0')
	{
		len++;
		text_content++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	w = write(fd, text_content, len + 1);
	if (fd == -1 || w == -1)
		return (-1);
	close(fd);

	return (1);

}
