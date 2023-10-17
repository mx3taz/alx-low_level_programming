#include "main.h"

/**
 * print_array - Prints n elements of an array of integers
 *
 * @a: Pointer to the integer
 * @n: the size of the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
	}
}
