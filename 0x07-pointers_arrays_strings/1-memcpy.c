#include "main.h"

/**
 * _memcpy - Copies memory area
 *
 * @dest: memory area to copy in
 * @src: memory area to be copied
 * @n: the number of bytes to copy
 *
 * Return: a pointer to @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
