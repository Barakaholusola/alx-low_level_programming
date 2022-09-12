#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i == 57)
		{
			continue;
		}			
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

