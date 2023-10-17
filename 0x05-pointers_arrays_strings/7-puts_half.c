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
		for (j = (i - 1) / 2; str[j] != '\0'; j++)
			_putchar(str[j]);
	else
		for (j = i / 2; str[j] != '\0'; j++)
			_putchar(str[j]);
	_putchar('\n');
}
