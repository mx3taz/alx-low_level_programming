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
	int i,j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (j !=9)
			{
				if (result < 10)
					{
						_putchar(result + 48);
						_putchar(',');
						_putchar(' ');
					}
				else
				{
					print_two_digits(result);
					_putchar(',');
				}
				_putchar(' ');
			}
			else
				_putchar(result + 48);
		}
		_putchar('\n');
	}
}
