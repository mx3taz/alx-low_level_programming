#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		putchar(',');
		if (i == 56)
			putchar(i);
	}
	putchar('\n');
	return (0);
}
