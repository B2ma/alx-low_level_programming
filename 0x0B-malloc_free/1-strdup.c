#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  *  _strdup - returns a pointer to a newly allocated space in memory
  *	which contains a copy of the string given as a parameter
  * @str: pointer to a sting
  *Return: NULL if str is NULL/pointer to duplicated string/Null if failure
  */
char *_strdup(char *str)
{
	int strLength;
	char *strMalloc;

	if (str == NULL)
	{
		return (NULL);
	}
	strLength = strlen(str);
	strMalloc = malloc(sizeof(char) * (strLength + 1));

	if (strMalloc != NULL)
	{
		strcpy(strMalloc, str);
	}
	else
	{
		return (NULL);
	}
	return (strMalloc);
}
