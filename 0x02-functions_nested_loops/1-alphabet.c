#include "main.h"

/**
 * main -Entry point
 * Description: the program references main.h to print
 *	the alphabet using _putchar
 * Return: Always 0
 */
void print_alphabet(void)
{
	char alphabets = 'a';

	while (alphabets <= 'z')
	{
		_putchar(alphabets);
		alphabets++;
	}
	_putchar('\n');
}
