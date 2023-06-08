#include "main.h"

/**
  * set_bit - sets the value of a bit to 1 at a given index
  * @n: pointer to the number
  * @index: the index, starting from 0 of the bit you want to set
  * Return: 1 if it worked, or -1 if an error occurred
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits_length = sizeof(unsigned long int) * 8;
	unsigned long int mask;

	if (n == NULL || index >= bits_length)
		return (-1);
	mask = 1UL << index;
	*n |= mask; 
	return (1);
}
