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
	int lastDigit;

	if (x < 0)
		x = -1 * (x % 10);
	else
		lastDigit = x % 10;

	_putchar(lastDigit + 48);
	return (lastDigit);
}
