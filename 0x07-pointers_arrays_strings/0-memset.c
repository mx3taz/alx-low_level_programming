#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 *
 * @s: pointer to a string
 * @b: the constant
 * @n: the first number of bytes
 *
 * Return: @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
