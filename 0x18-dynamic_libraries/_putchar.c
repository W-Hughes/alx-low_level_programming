#include <unistd.h>

/**
 *_putchar - this function write the single character that's
 *passed as an argument ot the std out.
 *
 * @c: the character to be printed
 *
 *Return: 1 on success.
 *On error, -1 is returned, and appropriately sets errno.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
