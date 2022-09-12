#include <stdio.h>
/**
 * main- Entry point
 *
 * Description: This prints the lowercase and then in uppercase, followed by a new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int alphabet, ALPHABET;

	alphabet='a';
	ALPHABET='A';
        for (alphabet <='z')
	{
		putchar(alphabet);
		alphabet++;
	}
	for(ALPHABET <='Z')
	{
		putchar(ALPHABET);
		ALPHABET++;
	}
	putchar('\n');
	return (0);
}
