#include "main.h"

/**
 * puts_half - Prints half of a string
 *
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
	int i, j;

	/* Calculate the length of the string */
	for (i = 0; str[i] != '\0'; i++)
		;

	/* Print the second half of the string */
	if (i % 2 == 0)
		for (j = i / 2; j < i; j++)
			_putchar(str[j]);
	else
		for (j = (i - 1) / 2; j < i; j++)
			_putchar(str[j]);

	_putchar('\n');
}
