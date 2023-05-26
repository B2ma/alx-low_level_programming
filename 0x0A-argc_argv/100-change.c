#include<stdio.h>
#include<stdlib.h>

/**
  * main - Entry point
  * Description: prints the minimum number of coins
  *	to make change for an amount of money
  * @argc: number of arguments provided in the program
  * @argv: array of pointers to the strings
  * Return: number of coins
  */
int main(int argc, char **argv)
{
	int n;
	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n <= 0)
	{
		printf("0\n");
	}
	coins = 0;
	coins += n / 25;
	n %= 25;
	coins += n / 10;
	n %= 10;
	coins += n / 5;
	n %= 5;
	coins += n / 2;
	n %= 2;
	coins += n;
	printf("%d\n", coins);
	return (0);
}
