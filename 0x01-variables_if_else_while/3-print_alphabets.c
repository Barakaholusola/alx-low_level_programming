#include <stdio.h>
/**
 * main- Entry point
 *
 * Description: Prints in lowercase then in uppercase, followed by a new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int alphabet, ALPHABET;

	alphabet = 'a';
	ALPHABET = 'A';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while (ALPHABET <= 'Z')
	{
		putchar(ALPHABET);
		ALPHABET++;
	}
	putchar('\n');
	return (0);
}
