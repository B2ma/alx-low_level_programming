#include "main.h"

/**
  * print_square - prints a square
  * @size: the size of the square
  */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int lines = 0;

		while (lines < size)
		{
			int length = 0;

			while (length < size)
			{
				_putchar('#');
				length++;
			}
			_putchar('\n');
			lines++;
		}
	}
	_putchar('\n');
}
