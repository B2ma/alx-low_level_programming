#include<stdio.h>

/**
  * main - Entry point
  * Description:  a program that finds and prints the sum
  *	of the even-valued terms in Fibonacci sequence
  * Return: 0
  */
int main(void)
{
	unsigned long int j1 = 1, j2 = 2, nextnum, sum = 2;

	for (nextnum = 1; nextnum <= 4000000; nextnum = j1 + j2)
	{
		nextnum = j1 + j2;
		if (nextnum % 2 == 0)
		{
			sum += nextnum;
		}
		j1 = j2;
		j2 = nextnum;
	}
	printf("%ld\n", sum);
	return (0);
}
