#include "main.h"

/**
 * append_text_to_file -  appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 (Success) or -1 (Failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (text_content)
	{
		while (*text_content != '\0')
		{
			len++;
			text_content++;
		}

		w = write(fd, text_content, len);

		if (w == -1)
			return (-1);
	}
	if (fd == -1)
		return (-1);

	close(fd);

	return (1);
}
