#include "main.h"

/**
 * _strlen - Returns the length of a string
 *
 * @s: Pointer to the string
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; s++)
		i++;

	return (i);
}
