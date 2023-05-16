#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * argstostr - concatinates all the arguments of program
  * @ac: Number of arguments
  * @av: pointer to the array of strings
  * Return: pointer to strings, NULL otherwise
  */
char *argstostr(int ac, char **av)
{
	int i;
	int tStringLength = 0;
	char *avMalloc;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		tStringLength += strlen(av[i]);
	}
	avMalloc = (char *)malloc(sizeof(char) * (tStringLength + ac + 1));
	if (avMalloc == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		strcat(avMalloc, av[i]);
		strcat(avMalloc, "\n");
	}
	return (avMalloc);
}
