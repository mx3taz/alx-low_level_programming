#include "main.h"

/**
 * print_two_digits - Prints two Digits
 *
 * @result: integer input
 */
void print_two_digits(int result)
{
	_putchar((result / 10) + 48);
	_putchar((result % 10) + 48);
}

/**
 * times_table - Prints the 9 times table, starting with 0 .
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			result = i * j;

			_putchar(',');
			_putchar(' ');
			if (result < 10)
				_putchar(' ');
			else
				print_two_digits(result);
		}
		_putchar('\n');
	}
}
