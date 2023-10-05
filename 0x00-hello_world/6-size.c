#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the size of various types on the computer.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %ld", sizeof(char));
	printf("Size of an int: %ld", sizeof(int));
	printf("Size of a long int: %ld", sizeof(long int));
	printf("Size of a long long int: %ld", sizeof(long long int));
	printf("Size of a float: %ld", sizeof(float));

	return (0);
}
