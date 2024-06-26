#include "main.h"

/**
 *jack_bauer - prints every minute of the day of Jack Bauer,
 *from 00:00 to 23:59
 *
 *
 *Return: 0 (success)
 *
 */
void jack_bauer(void)
{
	int hr, mins;

	for (hr = 0; hr < 24; hr++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
		}
	}
}
