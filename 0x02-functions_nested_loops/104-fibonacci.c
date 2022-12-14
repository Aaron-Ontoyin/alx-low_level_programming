#include <stdio.h>
#define MAX_NUM_LEN 10000000000

/**
 * main - prints first 98 fib seq starting from 1
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int p1 = 0, bk1 = 1, p2 = 0, bk2 = 2;
	unsigned long int temp1, temp2, temp3;
	int count;

	printf("%lu, %lu, ", bk1, bk2);
	for (count = 2; count < 98; count++)
	{
		if (bk1 + bk2 > MAX_NUM_LEN || p2 > 0 || p1 > 0)
		{
			temp1 = (bk1 + bk2) / MAX_NUM_LEN;
			temp2 = (bk1 + bk2) % MAX_NUM_LEN;
			temp3 = p1 + p2 + temp1;
			p1 = p2, p2 = temp3;
			bk1 = bk2, bk2 = temp2;
			printf("%lu%010lu", p2, bk2);
		}
		else
		{
			temp2 = bk1 + bk2;
			bk1 = bk2, bk2 = temp2;
			printf("%lu", bk2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
