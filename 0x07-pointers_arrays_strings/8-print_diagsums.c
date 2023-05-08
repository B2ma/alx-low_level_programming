#include "main.h"
#include<stdio.h>

/**
  * print_diagsums -  prints the sum of the two diagonals
  *	of a square matrix of integers
  * @a: pointer to the array
  * @size: size of the square
  */
void print_diagsums(int *a, int size)
{
	int add1, add2, j;

	add1 = 0;
	add2 = 0;

	for (j = 0; j < size ; j++)
	{
		add1 = add1 + a[j * size + j];
	}
	for (j = size - 1; j >= 0; j--)
	{
		add2 += a[j * size + (size - j - 1)];
	}
	printf("%d, %d\n", add1, add2);
}
