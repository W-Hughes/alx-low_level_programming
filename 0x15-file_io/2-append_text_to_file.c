#include "main.h"

/**
 *append_text_to_file - Appends text at the end of a file.
 *@filename: The name of the file
 *@text_content: Null terminating string
 *
 *Return: 1 on success, otherwise -1 if
 *	filename is NULL or file doesn't exit.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	ssize_t _strlen = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	while (text_content[_strlen])
		_strlen++;

	bytes_written = write(fd, text_content, _strlen);
	if (bytes_written == -1 || bytes_written != _strlen)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
