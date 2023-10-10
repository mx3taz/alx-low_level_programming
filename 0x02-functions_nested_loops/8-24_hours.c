#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours <= 23; hours++)
	{
		_putchar((hours % 100) + 48);
		_putchar((hours % 10) + 48);
		_putchar(':');
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar((minutes % 100) + 48);
			_putchar((minutes % 10) + 48);
		}
		_putchar('\n');
	}
}
