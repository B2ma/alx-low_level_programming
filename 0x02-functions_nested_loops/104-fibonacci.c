#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the first 98 Fibonacci numbers
 *	starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	unsigned long int a = 1, b = 2, count;
	unsigned long int a1;
	unsigned long int a2;
	unsigned long int b1;
	unsigned long int b2;
	unsigned long int large = 1000000000;

	printf("%lu", a);
	for (count = 1; count < 91; count++)
	{
		printf(", %lu", b);
		b += a;
		a = b - a;
	}
	a1 = (a / large);
	a2 = (a % large);
	b1 = (b / large);
	b2 = (b / large);
	for (count = 92; count < 99; count++)
	{
		printf(", %lu", b1 + (b2 / large));
		printf("%lu", b2 % large);
		b1 = b1 + a1;
		a1 = b1 - a1;
		b2 = b2 + a2;
		a2 = b2 - a2;
	}
	printf("\n");
	return (0);
}
