#include "main.h"

/**
  * _isItInteger - Checkf if numbers are integers
  * @n: The number to be checked
  * @i: the squareroot of n
  * Return: 1 if integer, 0 otherwise
  */
int _isItInteger(int n, int i)
{
	if (i * i == n)
		return (1);
	else if (i * i > n)
		return (0);
	else
		return (_isItInteger(n, i + 1));
}
#include "main.h"

/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: the number
  * Return: thesquare root or -1
  */
int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	if (_isItInteger(n, i))
	{
	return (i);
	}
	return (-1);
}
