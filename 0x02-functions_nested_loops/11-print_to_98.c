#include "main.h"
#include <stdio.h>

/**
  * print_to_98 prints all natural numbers from n to 9
  *	followed by a new line
  * Return: always 0
  */
void print_to_98(int n)
{
	int num;

	for (num >= n; num <= 9; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);

}
