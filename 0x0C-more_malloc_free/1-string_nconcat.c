#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * string_nconcat - concatenates two strings
  * @s1: First string
  * @s2: Second string
  * @n: the number of bytes from s2 to be concatenated
  * Return: pointer to allocated memory, Null otherwise
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *stringConcMem;
	unsigned int s1len;
	unsigned int s2len;
	unsigned int i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1len = strlen(s1);
	s2len = strlen(s2);
	if (n >= s2len)
	{
		i = s2len;
	}
	else
	{
		i = n;
	}
	stringConcMem = malloc(sizeof(char) * (s1len + i + 1));
	if (stringConcMem == NULL)
	{
		return (NULL);
	}
	strcpy(stringConcMem, s1);
	strncat(stringConcMem, s2, i);
	return (stringConcMem);
}
