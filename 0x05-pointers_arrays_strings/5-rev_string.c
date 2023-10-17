#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: Pointer to the string
 */
void rev_string(char *s)
{
	int i, j = 0;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (; j < i / 2; j++)
	{
		temp = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = temp;
	}
}
