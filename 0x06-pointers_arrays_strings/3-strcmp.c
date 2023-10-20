#include "main.h"

/**
 * _strcmp - Compares two strings
 *
 * @s1: input 1
 * @s2: input 2
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			i = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}

	return (i);
}
