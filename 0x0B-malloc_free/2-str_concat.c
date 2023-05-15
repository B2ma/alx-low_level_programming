#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * str_concat - Concatinates two strings
  * @s1: first string
  * @s2: secong string
  * Return: NULL on failure or new pointer with s1 & s2 contents
  */
char *str_concat(char *s1, char *s2)
{
	int s1Len = 0;
	int s2Len = 0;
	char *s1s2Malloc = NULL;

	s1Len = strlen(s1);
	s2Len = strlen(s2);
	s1s2Malloc = malloc(sizeof(char) * (s1Len + s2Len + 1));
	if (s1s2Malloc == NULL)
	{
		return (NULL);
	}
	else
	{
		if (s1 != NULL)
			strcpy(s1s2Malloc, s1);
		if (s2 != NULL)
			strcat(s1s2Malloc, s2);
	}
	return (s1s2Malloc);
}
