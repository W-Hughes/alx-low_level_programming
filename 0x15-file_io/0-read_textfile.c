#include "main.h"

/**
 *read_textfile - Reads a text file and prints it to POSIX Std output
 *@filename: The file to read and print text from.
 *@letters: The number of letters to read and print from the file.
 *
 * Return: Actual number of letters it could read and print, otherwise 0 if;
 *	file cannot be opened, read or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t byte_read;
	ssize_t byte_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	byte_read = read(fd, buffer, letters);
	if (byte_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	byte_written = write(STDOUT_FILENO, buffer, byte_read);
	if (byte_written == -1 || byte_read != byte_written)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (byte_written);

}
