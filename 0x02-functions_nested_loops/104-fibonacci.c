#include <stdio.h>

#define MAX_DIGITS 30

/**
 * print_fibonacci - prints the first 98 Fibonacci numbers
 */
void print_fibonacci(void)
{
	unsigned long f1 = 1, f2 = 2, tmp, f1o = 0, f2o = 0, tmpo = 0;
	int i;

	printf("%lu, %lu", f1, f2);
	for (i = 3; i <= 98; i++)
	{
		tmp = f1 + f2;
		tmpo = f1o + f2o + (tmp < f1 || tmp < f2);
		f1 = f2;
		f1o = f2o;
		f2 = tmp;
		f2o = tmpo;
		if (f1o > 0)
		{
			printf("%0*lu%0*lu", MAX_DIGITS - 1, f1o, MAX_DIGITS, f1);
		}
		else
		{
			printf("%lu", f1);
		}
		if (i < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
}

/**
 * main - entry point
 * Return: 0 on success
 */
int main(void)
{
	print_fibonacci();
	return (0);
}
