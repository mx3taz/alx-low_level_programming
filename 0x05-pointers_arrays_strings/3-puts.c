#include "main.h"

/**
 * _puts - Prints a string
 *
 * @str: Pointer to the string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; str++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
