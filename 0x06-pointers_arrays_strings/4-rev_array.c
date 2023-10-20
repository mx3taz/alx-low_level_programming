#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 *
 * @a: the array
 * @n: the number of elements of the array @a
 */
void reverse_array(int *a, int n)
{
	int i, j, k;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;
	}
}
