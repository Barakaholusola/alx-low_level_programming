#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: Prints alphabets in lowercase, followed by a new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
