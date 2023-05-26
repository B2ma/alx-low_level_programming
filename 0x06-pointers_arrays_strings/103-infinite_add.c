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
	int i = 0, j = 0, overflow = 0, digits = 0;
	int val1, val2, temp_sum;

	while (n1[i])
		i++;
	while (n2[j])
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || overflow)
	{
		val1 = (i >= 0) ? (n1[i--] - '0') : 0;
		val2 = (j >= 0) ? (n2[j--] - '0') : 0;
		temp_sum = val1 + val2 + overflow;
		overflow = temp_sum / 10;
		if (digits >= size_r - 1)
			return (0);
		r[digits++] = (temp_sum % 10) + '0';
	}
	if (overflow && digits < size_r - 1)
		r[digits++] = overflow + '0';
	if (digits == size_r)
		return (0);
	r[digits] = '\0';
	i = 0;
	j = digits - 1;

	while (i < j)
	{
		char temp = r[i];

		r[i++] = r[j];
		r[j--] = temp;
	}
	return (r);
}
