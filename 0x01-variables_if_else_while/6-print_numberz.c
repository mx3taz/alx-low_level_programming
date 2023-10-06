#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10 starting from 0
 * using ASCII
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
