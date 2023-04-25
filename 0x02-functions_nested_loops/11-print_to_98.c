#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - prints all natural numbers from n to 9
  *	followed by a new line
  * @n: the starting number
  * Return: always 0
  */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
	for (i = n; i < 98; i++)
	{
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');
		putchar(',');
		putchar(' ');
	}
	}
	else
	{
	for (i = 1; i > 98; i++)
	{
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');
		putchar(',');
		putchar(' ');
	}
	}
	putchar('9');
	putchar('8');
	putchar('\n');
}
