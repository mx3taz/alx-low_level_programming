#include "main.h"

/**
 * _islower - Checks if is lower
 *
 * @c: the character
 *
 * Return: 1 if is, otherwise 0
 */
int _islower(char c)
{
	return (c >= 97 && c <= 122)
}

/**
 * _delimiter - Checks if is delimiter
 *
 * @c: the character
 *
 * Return: 1 if is, otherwise 0
 */
int _delimiter(char c)
{
	int i;
	char ch[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == ch[i])
			return (1);
	return (0);
}

/**
 * cap_string -Capitalizes all words of a string
 *
 * @s: pointer to a string
 *
 * Return: the capitalized string
 */
char *cap_string(char *s)
{
	char *str = s;
	int i = 1;

	while (*s)
	{
		if (_delimiter(*s))
			i = 1;
		else if (_islower(*s) && i)
		{
			*s -= 32;
			i = 0;
		}
		else
			i = 0;
		s++;
	}
	return (str);
}
