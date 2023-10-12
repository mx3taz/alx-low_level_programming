#include "main.h"

/**
 * _isupper - Checks for uppercase character
 *
 * @c: a character input
 *
 * Return: 1 if @c is uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	return (0);
}
