#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints `_putchar` followed by \n.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char word[] = {_putchar};

	for (i = 0; word[i] != '\0'; i++)
		_putchar(word[i]);

	return (0);
}
