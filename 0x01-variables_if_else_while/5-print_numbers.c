#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: Prints all single digit numbers of base 10
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		print("%i", digit);
	}
	putchar('\n');
	return (0);
}

