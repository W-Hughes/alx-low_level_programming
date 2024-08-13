#include "main.h"

/**
 *_print_error_and_exit - Prints error message and exit process.
 *@error: Error code
 *@s: FIle name to be printed, if applicable
 *@fd: File decriptor, if applicable.
 *
 */
void _print_error_and_exit(int error, char *s, int fd)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
			break;
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			break;
		default:
			dprintf(STDERR_FILENO, "Unknown error\n");
			break;
	}
	exit(error);
}
/**
 *main - Copies content of a file to another file.
 *@argc: Number of command-line arguments
 *@argv: Array of argument passed.
 *Return: 0 on success, otherwise print error message and exit on error code.
 */

int main(int argc, char *argv[])
{
	int fd_from;
	int fd_to;
	ssize_t bytes_read;
	ssize_t bytes_written;
	char buffer[1024];

	if (argc != 3)
		_print_error_and_exit(97, NULL, 0);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		_print_error_and_exit(98, argv[1], 0);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		_print_error_and_exit(99, argv[2], 0);

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			_print_error_and_exit(99, argv[2], 0);
		}
	}
	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		_print_error_and_exit(98, argv[1], 0);
	}
	if (close(fd_from) == -1)
		_print_error_and_exit(100, NULL, fd_from);
	if (close(fd_to) == -1)
		_print_error_and_exit(100, NULL, fd_to);
	return (0);
}
