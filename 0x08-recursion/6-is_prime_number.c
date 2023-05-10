#include "main.h"

/**
  * is_prime_number -  returns 1 if the input integer is a
  *	prime number, otherwise return 0
  * @n: the number to be checked
  * Return: 1 if prime, 0 otherwise
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (realPrimeNum(n, n - 1));
}
/**
  * realPrimeNum - calculates recussively if a number is prime
  * @n: the number
  * @itr: the iterator
  * Return: 1 if prime, 0 otherwise
  */
int realPrimeNum(int n, int itr)
{
	if (itr == 1)
		return (1);
	if (n % itr == 0)
		return (0);
	return (realPrimeNum(n, itr - 1));
}
