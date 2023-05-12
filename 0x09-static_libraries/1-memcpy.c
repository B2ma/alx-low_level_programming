#include "main.h"

/**
  * _memcpy - copies memory area
  * @src: Source area
  * @dest: destination area
  * @n: the number of bytes in src
  * Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int b = 0;

	for (; n > 0; b++)
	{
		dest[b] = src[b];
		n--;
	}
	return (dest);
}
