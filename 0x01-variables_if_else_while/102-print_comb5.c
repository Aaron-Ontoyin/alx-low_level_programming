#include <stdio.h>
#include <stdlib.h>


/**
 * main - Entry point of program
 *
 * Return: Returns 0 for success
 */
int main(void)
{
	int a,b,c,d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b < '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				for (d = '1'; d <= '9'; d++)
				{
					if (b > c)
						continue;
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					putchar(',');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
