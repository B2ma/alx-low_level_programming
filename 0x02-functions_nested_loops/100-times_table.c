#include "main.h"

/**
  * print_times_table - prints the n times table
  * @n: the number
  */
void print_times_table(int n)
{
	int i, j, times;

	if (n >= 0 && n <= 15)
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			times = i * j;
			if (j == 0)
			{
				_putchar('0');
			}
			else if (times < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(times + '0');
			}
			else if (times < 100)
			{
				_putchar(' ');
				_putchar((times / 10) + '0');
				_putchar((times % 10) + '0');
			}
			else
			{
				_putchar((times / 100) + '0');
				_putchar(((times / 10) % 10) + '0');
				_putchar((times % 10) + '0');
			}
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	}
}
