#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 *
 * @n: an input integer
 *
 * Return: The natural square root of a number
 */
int findSquare(int n, int n2);

int _sqrt_recursion(int n)
{
	return (findSquare(n, 1));
}

/**
 * findSquare - finds the square root
 * @n: input 1
 * @n2: input 2
 * Return: an integer
 */
int findSquare(int n, int n2)
{
	if (n2 * n2 == n)
		return (n2);
	else if (n2 * n2 < n)
		return (findSquare(n, n2 + 1));
	else
		return (-1);
}
