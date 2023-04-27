#include "main.h"

/**
  * print_line - draws a straight line
  * @n: times to be printed
  */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\\');
		_putchar('n');
	}
	else
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
	}
	_putchar('\n');
}
