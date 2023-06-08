#include "main.h"

/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: pointer to a string of 0 and 1 chars
  * Return: converted number, 0 or NULL otherwise.
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int numb = 0;

	if (b == NULL)
		return (0);
	for (; *b; b++)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		else
		{
			if (*b == '1')
				numb = (numb << 1) | 1;
			else if (*b == '0')
				numb <<= 1;
			else
				break;
		}
	}
	return (numb);
}
