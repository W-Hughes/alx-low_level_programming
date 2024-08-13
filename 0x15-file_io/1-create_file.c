#include "main.h"

/**
 *create_file - Creates a new file.
 *@filename: The name of the file to create
 *@text_content: NULL terminating string to write to the file.
 *
 *Return: 1 on success, otherwise -1 if
 *	file cannot be created or written or write files.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t new_file;
	int _strlen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[_strlen])
			_strlen++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	new_file = write(fd, text_content, _strlen);

	if (new_file == -1 || fd == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
