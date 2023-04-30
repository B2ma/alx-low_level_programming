#include<stdio.h>

/**
  * main - Entry point
  * Description: prints the first 98 Fibonacci numbers
  *	starting with 1 and 2
  * Return: 0
  */
int main(void)
{
	int n = 98;
	unsigned long int j1 = 1, j2 = 2, nextnum;

	printf("1, 2, ");
	for (n = 3; n <= 98; n++)
	{
		nextnum = j1 + j2;
		printf("%lu", nextnum);
		j1 = j2;
		j2 = nextnum;
		if (n != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
