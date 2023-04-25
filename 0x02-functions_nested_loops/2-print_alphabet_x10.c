#include "main.h"

/**
  * main - prints 10 times the alphabet, in lowercase
  *	followed by a new line
  * Return: Always 0
  */
void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int i = 0;

	while (i < 10)
	{
	int j = 0;
	while (j < 26)
	{
		_putchar(alphabet + j);
		j++;
	}
	alphabet = 'a';
	i++;
	}
	_putchar('\n');
}
