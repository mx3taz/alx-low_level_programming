#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 *
 * @a: pointer to an int
 * @b: pointer to an int
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
