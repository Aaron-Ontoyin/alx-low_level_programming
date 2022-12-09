#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point of program
 *
 * Return: 0 for success
 */
int main(void)
{
	char c = 'a';

	do {
		if (c != 'q' || c != 'e')
		{
			putchar(c);
			c++;
		}
	} while (isalpha(c));
	putchar('\n');
	return (0);
}
