#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point of program
 *
 * Return: 0 for success
 */
int main(void)
{
	int num = 0;

	do {
		putchar((char)num);
		num++;
	} while (num < 10);
	putchar('\n');
	return (0);
}
