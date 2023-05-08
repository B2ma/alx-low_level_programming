#include "main.h"

/**
  * _memset - fills memory with a constant byte
  * @s:pointer to the memory area
  * @b: the constant byte
  * @n:bytes of the memory area
  * Return: pointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	int m = 0;

	for (; n > 0; m++)
	{
		s[m] = b;
		n--;
	}
	return (s);
}
