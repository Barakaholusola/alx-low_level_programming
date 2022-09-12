#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- Entry point
 *
 * Description: This prints out the last digit of the number stored in variable
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;

	if (lastdigit > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, lastdigit);
	}
	else if (lastdigit == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n);
	}
	else 
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastdigit);
	return (0);
	}

