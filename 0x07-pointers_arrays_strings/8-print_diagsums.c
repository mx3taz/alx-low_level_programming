#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: an array
 * @size: the size of the array
 */
void print_diagsums(int *a, int size)
{
	int i, x = 0, y = 0;

	for (i = 0; i < size; i++)
	{
		x += a[i];
		y += a[size - i - 1];
		a += size;
	}
	printf("%d, ", x);
	printf("%d\n", y);
}
