#include "main.h"

/**
  * get_bit - returns the value of a bit at a given index
  * @n: unsigned long int number
  * @index: index starting from zero
  * Return: the value of the bit at index index or -1 if an error occured
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits_length = sizeof(unsigned long int) * 8;
	unsigned long int mask;

	if (index >= bits_length)
		return (-1);
	mask = 1UL << index;

	return ((n & mask) ? 1 : 0);
}
