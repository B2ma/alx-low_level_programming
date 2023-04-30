#include<stdio.h>

/**
  * main - Entry point
  * Description: prints the first 50 Fibonacci numbers
  * Return: o
  */
int main(void)
{
	int i, n = 50;
	unsigned long j1 = 1, j2 = 1, nextnum = 1;

	for (i = 1; i <= n; i++)
	{
		printf("%ld", nextnum);
		nextnum = j1 + j2;
		j1 = j2;
		j2 = nextnum;
		if (i != n)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
