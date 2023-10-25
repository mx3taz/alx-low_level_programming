#include "main.h"

/**
 * is_prime_number - Checks if a number is a prime or not
 *
 * @n: the nummber
 * @n2: int input
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int prime(int n, int n2);
int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 * prime - checks numbers < n == 0
 * @n: numer input
 * @n2: number input
 *
 * Return: an integer
 */
int prime(int n, int n2)
{
	if (n2 >= n && n > 1)
		return (1);
	else if (n % n2 == 0 || n <= 1)
		return (0);
	else
		return (prime(n, n2 + 1));
}
