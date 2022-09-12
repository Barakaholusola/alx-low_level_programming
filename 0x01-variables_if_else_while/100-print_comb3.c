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

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 8 && j == 9)
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

