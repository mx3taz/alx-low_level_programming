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
	printf("Size of a char: %c", sizeof(char));
	printf("Size of an int: %d", sizeof(int));
	printf("Size of a long int: %ld", sizeof(long int));
	printf("Size of a long long int: %lld", sizeof(long long int));
	printf("Size of a float: %f", sizeof(float));

	return (0);
}
