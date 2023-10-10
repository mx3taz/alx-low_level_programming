#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @x: a number input
 *
 * Return: The value of the last digit
 */
int print_last_digit(int x)
{
	long int lastDigit;

	if (x < 0)
	{
		x = -x;
	}

	lastDigit = x % 10;

	_putchar(lastDigit + 48);

	return (lastDigit);
}
