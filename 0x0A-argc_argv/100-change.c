#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


/**
 * cal_num_coins - calculates the num of coins given the total val
 * @v: total val of coins
 * Return: number of possible minimum coins given their total is v
 */
int cal_num_coins(int v)
{
	int n = 0;

	n += v / 25;
	v = v % 25;
	n += v / 10;
	v = v % 10;
	n += v / 5;
	v = v % 5;
	n += v / 2;
	v = v % 2;
	n += v;

	return (n);
}

/**
 * main - finds the minimum number of coins as change
 * @argc: number of cmdline args passed to it
 * @argv: an array of pointers to string args passed to it
 * Return: 0 for success; 1 for error if argc is not 2 or argv[1] < 0
 */
int main(int argc, char *argv[])
{
	int change;
	int num_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);

	if (change >= 0)
		num_coins = cal_num_coins(change);

	printf("%d\n", num_coins);
	return (0);
}

