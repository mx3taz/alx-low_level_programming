#include "main.h"

/**
 * print_triangle - Prints a triangle
 *
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int x;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			x = (size - i) + 1;
			for (j = 1; j <= size; j++)
			{
				if (j <= x)
					_putchar(' ');
				else
					_putchar('#');
				_putchar('\n');
			}
		}
	}
}
