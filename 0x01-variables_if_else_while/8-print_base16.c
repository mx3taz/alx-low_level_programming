#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;
	char j = 'a';

	for (; i <= 9; i++)
		putchar(i);
	for (; j <= 'f'; j++)
		putchar(j);

	putchar('\n');
	return (0);
}
