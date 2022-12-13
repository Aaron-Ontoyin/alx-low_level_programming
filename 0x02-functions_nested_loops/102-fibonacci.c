#include <stdio.h>

/**
 * main - prints first 50 fibo numbers satrting with 1 and 2
 * Return: 0 on success
 */
int main(void)
{;
	int i; 
	long temp;
	long p1 = 0;
	long p2 = 1;

	for (i = 1; i <= 50; i++)
	{
		printf("%lu", p1 + p2);
		temp = p1;
		p1 = p2;
		p2 = temp + p2;
		if (i < 50)
			printf(", ");
	}

	printf("\n");

	return (0);
}
