#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 *
 * @s: a pointer to a string
 * @accept: a pointer to a string for bytes
 *
 * Return: a pointer to the byte in @s, or NULL if
 * no bytes was found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept [j])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
