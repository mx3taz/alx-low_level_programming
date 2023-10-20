#include "main.h"

/**
 * _strncpy - Copies a string
 *
 * @dest: input 1
 * @src: input 2
 * @n: bytes of @src
 *
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
