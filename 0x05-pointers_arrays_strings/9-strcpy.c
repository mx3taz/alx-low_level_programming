#include "main.h"

/**
 * *_strcpy - copies a string to another string
 *
 * @dest: Pointer to the string
 * @src: Pointer to the string
 *
 * Return: @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}
