#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: Prints all possible different combinations of two digits
 *
 * Return: 0 (Sucess)
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 57; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
		
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
			continue;
		}
	}
	putchar('\n');
	return (0);
}

