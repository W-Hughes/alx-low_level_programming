#include <unistd.h>
/**
 *main - Rntry point of the program
 *
 * Description: Print a specific string using the write.
 *
 * Return: Always  0 (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
