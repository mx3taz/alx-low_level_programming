#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @x: input
 * Return: The absolute value
 */
int _abs(int x)
{
	if (x < 0)
		return (-x);
	else
		return (x);
}
