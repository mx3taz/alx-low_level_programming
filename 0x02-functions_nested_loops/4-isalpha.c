#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 *
 * @c: input
 *
 * Return: 1 if @c id an alphabetic character, 
 * otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
