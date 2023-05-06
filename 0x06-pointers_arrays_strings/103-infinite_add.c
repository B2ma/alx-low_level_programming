#include "main.h"

/**
  * infinite_add -  adds two numbers
  * @n1: text representation of 1st number to add
  * @n2: text representation of 2nd number to add
  * @size_r: buffer size
  * @r: pointer to buffer
  * Return: pointer to calling function
  */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, len, overflow, temp_tot = 0;

	for (i = 0; *(n1 + i); i++)
		;
	for (j = 0; *(n2 + j); j++)
		;
	len = (i > j) ? i : j;
	if (len >= size_r - 1)
		return (0);
	*(r + len) = '\0';
	i--;
	j--;
	for (k = len - 1; k >= 0; k--)
	{
		temp_tot = overflow;
		if (i >= 0)
			temp_tot += *(n1 + i--) - '0';
		if (j >= 0)
			temp_tot += *(n2 + j--) - '0';
		*(r + k) = (temp_tot % 10) + '0';
		overflow = temp_tot / 10;
	}
	if (overflow)
	{
		if (len >= size_r - 2)
			return (0);
		for (i = k; k > 0; k--)
			*(r + k) = *(r + k - 1);
		*r = overflow + '0';
	}
	return (r);
}
