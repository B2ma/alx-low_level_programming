#include "main.h"

/**
  * flip_bits - returns the number of bits you would need to
  *	flip to get from one number to another
  * @n: the first number
  * @m: the second number
  * Return: number of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result_xor = n ^ m;
	unsigned int numb_bits = 0;

	while (result_xor != 0)
	{
		if (result_xor & 1)
			numb_bits++;
		result_xor >>= 1;
	}
	return (numb_bits);
}
