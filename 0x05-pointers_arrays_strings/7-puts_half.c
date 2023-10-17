#include "main.h"

/**
 * puts_half - Prints half of a string
 *
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;

	if (i % 2 != 0)
		for (j = 0; j <= (i - 1) / 2; j++)
			_putchar(str[i]);
	else
		for (j = 0; j <= i / 2; j++)
			_putchar(str[i]);
	_putchar('\n');
}
