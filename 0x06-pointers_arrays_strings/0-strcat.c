#include "main.h"

/**
  * _strcat -  function that concatenates two strings
  * @src: the current string
  * @dest: the string after appendment
  * Return: dest
  */
char *_strcat(char *dest, char *src)
{
	int destlen = 0, i;

	while (dest[destlen])
	{
		destlen++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[destlen] = src[1];
		destlen++;
	}
	dest[destlen] = '\0';
	return (dest);
}
