#include "main.h"

/**
  * print_triangle - prints a triangle
  * @size: size of the triangle
  */
void print_triangle(int size)
{
	int i = 1, j, k;

	if (i < size)
	{
		_putchar('\n');
	}
	while (i <= size)
	{
	j = size - i;

	while (j > 0)
	{
		_putchar(' ');
		j--;
	}
	k = 1;

	while (k <= i)
	{
		_putchar('#');
		k++;
	}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
