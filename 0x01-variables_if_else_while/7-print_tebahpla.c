#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: Prints lowercase alphabets in reverse
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

