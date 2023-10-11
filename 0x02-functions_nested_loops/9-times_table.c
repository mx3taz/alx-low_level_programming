#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0 .
 */
void times_table(void)
{
	int i,j, result;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (result >= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + 48);
				_putchar((result % 10) + 48);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + 48);
			}
		}
	}
}
