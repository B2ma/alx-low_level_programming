#include<stdio.h>
#include<stdbool.h>

/**
  * isprime - prints the prime numbers
  * @n: number to find the largest prime
  * Description:  finds and prints the largest prime factor of the number
  * Return: 0
  */
bool isprime(long long int n)
{
	long long int i;

	if (n < 2)
	{
		return (false);
	}
	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			return (false);
		}
	}
	return (true);
}

int main(void)
{
	long long int n = 612852475143;
	long long int i;

	for (i = n; i >= 2; i--)
	{
		if (isprime(i))
		{
			printf("%lld\n", i);
			break;
		}
	}
	return (0);
}
