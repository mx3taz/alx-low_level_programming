#include "main.h"

/**
 * _strcat - Concatenates two strings
 *
 * @dest: input string 1
 * @src: input string 2
 *
 * Return: @dest
 */
char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] = '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
