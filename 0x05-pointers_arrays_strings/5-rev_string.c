#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: Pointer to the string
 */
void rev_string(char *s)
{
	int i, j;
	char str;

	for (i = 0; s[i] != '\0'; i++)
		str[i] = s[i];

	for (i = i - 1, j = 0; i >= 0, s[j] != '\0'; i--, j++)
	{
		s[j] = str[i];
	}
}
