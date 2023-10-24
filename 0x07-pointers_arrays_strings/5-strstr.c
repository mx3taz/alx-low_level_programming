#include "main.h"

/**
 * _strstr - Locates a substring in a string.
 *
 * @haystack: The main string to search in.
 * @needle: The substring to search for.
 *
 * Return: a pointer to the beginning of the located substring, or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		i = 0;
		j = 0;

		while (haystack[i] == needle[j])
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
