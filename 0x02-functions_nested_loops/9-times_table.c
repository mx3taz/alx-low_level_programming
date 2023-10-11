#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0 .
 */
void times_table(void)
{
	int i,j, result;

	for (i = 1; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			result = i * j;
			if (result >= 9);
			{
				_putchar(' ');
				_putchar((result / 10) + 48);
				_putchar((result % 10) + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + 48);
			}
		}
	}
}
