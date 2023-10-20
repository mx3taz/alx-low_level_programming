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
	int i, j;

	i = 0;
	while (dest[i])
		i++;

	for (j = 0; src[j]; j++)
		dest[i++] = src[j];

	return (dest);
}
