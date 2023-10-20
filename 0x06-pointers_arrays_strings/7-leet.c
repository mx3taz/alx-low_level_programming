#include "main.h"

/**
 * leet - Encodes a string into 1337
 *
 * @s: pointer to a string
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	char *str = s;
	char ch1[] = {'A', 'E', 'O', 'T', 'L'};
	int ch2[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*s)
	{
		for (i = 0; i < sizeof(ch1) / sizeof(char); i++)
		{
			if (*s == ch1[i] || *s == ch1[i] + 32)
				*s = 48 + ch2[i];
		}
		s++;
	}
	return (str);
}
