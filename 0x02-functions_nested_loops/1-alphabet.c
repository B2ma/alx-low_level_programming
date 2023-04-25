#include "main.h"

/**
 * print_alphabet - prints the alphabet
 * Description: the program references main.h to print
 *	the alphabet using _putchar
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
