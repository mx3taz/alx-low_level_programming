#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: input
 * Return: The absolute value
 */
int _abs(int n)
{
	int absoluteValue;

	if (n < 0)
		absoluteValue = n * -1;

	return (absoluteValue);
}
