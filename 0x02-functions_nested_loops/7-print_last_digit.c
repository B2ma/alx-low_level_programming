#include "main.h"

/**
  * print_last_digit prints the last digit of a number
  * @n is the number to get the last digit from
  * Return: Returns the value of the last digit
  */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = _abs(int n) % 10;
	if (last_digit <= 9)
	{
		return (last_digit);
	}
}
