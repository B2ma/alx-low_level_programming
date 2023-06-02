#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<gmp.h>
#include "main.h"

/**
  * main - Entry point
  * @argc: number of arguments
  * @argv: number of arrays
  * Return: 0 always
  */
int main(int argc, char **argv)
{
	mpz_t mul, num1, num2;

	if (argc != 3)
	{
		fprintf(stderr, "Error\n");
		return (98);
	}
	mpz_init(num1);
	mpz_init(num2);
	mpz_init(mul);
	if (mpz_set_str(num1, argv[1], 10 == -1) ||
			mpz_set_str(num2, argv[2], 10 == -1))
	{
		fprintf(stderr, "Error\n");
		return (98);
	}
	mpz_mul(mul, num1, num2);
	gmp_printf("%Zd\n", mul);
	mpz_clear(num1);
	mpz_clear(num2);
	mpz_clear(mul);
	return (0);
}
