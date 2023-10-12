#include "main.h"

/**
 * main - Prints the numbers from 1 to 100
 *
 * Description: Prints numbers from 1 to 100 :
 * Prints Fizz for multiples of 3
 * Prints Buzz for multiples of 5
 * Prints FizzBuzz for multiples of 3 and 5
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);
		if (i != 100)
			_putchar(' ');
	}
	return (0);
}
