#include "main.h"

/**
  * _strspn - gets the length of a prefix substring
  * @s: contents of the whole string
  * @accept: substring of s
  * Return: number of bytes from accept
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int n;

	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
			if (*s == accept[n])
			{
				a++;
				break;
			}
			else if (accept[n + 1] == '\0')
				return (a);
		}
		s++;
	}
	return (a);
}
