#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include "main.h"

/**
  * main - Entry point
  * @argc: number of arguments
  * @argv: number of arrays
  * Return: 0 always
  */
int main(argc, *argv)
{
	int mul, num1, num2;

	if (argc != 3)
	{
		fprintf(stderr, "Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (!isdigit(num1) || !isdigit(num2))
	{
		fprintf(stderr, "Error\n");
		return (98);
	}
	mul = num1 * num2;
	_putchar("%d\n", mul);
	return (0);
}
