#include "main.h"

/**
 * _strchr - Locates a character in a string
 *
 * @s: a pointer to the string
 * @c: the character
 *
 * Return: return @c if the character exists,
 * otherwise return NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (c == s[i])
			return (s + i);
	}
	return ('\0');
}
