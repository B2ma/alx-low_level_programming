#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the first 98 Fibonacci numbers
 *	starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	unsigned long a = 1, b = 2, c, count;

	printf("%lu, %lu", a, b);
	for (count = 3; count <= 98; count++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
