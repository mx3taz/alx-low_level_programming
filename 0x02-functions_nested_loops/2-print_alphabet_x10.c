#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char alphabets;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
			_putchar(alphabets);
		_putchar('\n');
	}
}
