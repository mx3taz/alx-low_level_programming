#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: Pointer to the string
 */
void rev_string(char *s)
{
	int i, j = 0;
	char str[];

	for (i = 0; s[i] != '\0'; i++)
		str[i] = s[i];

	for (i = i - 1; i >= 0; i--)
	{
		s[j] = str[i];
		j++;
	}
}
