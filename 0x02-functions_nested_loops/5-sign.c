#include "main.h"

/**
  * print_sign prints the sign of a nuber
  * @num: number to check
  * Return: 1 and prints + if num is greater than zero
  *	0 and prints 0 if num is zero
  *	-1 and prints - if num is less than zero
  */
int print_sign(int num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
