#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point of program
 *
 * Return: 0 for success
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (l = 'A'; l <= 'Z'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
