#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 *
 * @n: an input number
 */
void print_to_98(int n)
{
	if (n != 98)
	{
		if (n > 98)
			while (n >= 98)
			{
				printf("%d, ", n);
				n--;
				if (n == 98)
					printf("%d", n);
			}
		else
			while (n <= 98)
			{
				printf("%d, ", n);
				n++;
				if (n == 98)
					printf("%d", n);
			}
	}
	else
		printf("%d", n);
	printf("\n");
}
