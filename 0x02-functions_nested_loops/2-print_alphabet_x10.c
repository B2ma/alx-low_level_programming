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
	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	alphabet = 'a';
	i++;
	if (i != 10)
	_putchar('\n');
	}
	_putchar('\n');
}
