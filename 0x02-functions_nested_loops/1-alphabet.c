#include "main.h"

/**
 * print_alphabet -  Prints the alphabet, in lowercase.
 * Return: Nothing
 */
void print_alphabet(void)
{
	char i = 'a';

	for (; i <= 'z'; i++)
		_putchar(i);

	_putchar('\n');
}
