#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * strtow - splits astring into two words
  * @str: pointer to the string
  * Return: pointer to array of words, NULL otherwise
  */
char **strtow(char *str)
{
	int i, j, k;
	int words = 0, stringLength = strlen(str);
	char **strMalloc = (char **)malloc(sizeof(char *) * (stringLength + 1));

	if (str == NULL || *str == '\0' || (*str == ' ' && *(str + 1) == '\0'))
		return (NULL);
	if (strMalloc == NULL)
		return (NULL);
	for (i = 0; i < stringLength; i++)
	{
		if (str[i] == ' ')
		{
			continue;
		}
		j = i;
		while (str[i] != ' ' && str[i] != '\0')
		{
			i++;
		}
		if (i - j == 0)
			return (NULL);
		strMalloc[words] = (char *)malloc(sizeof(char) * (i - j + 1));

		if (strMalloc[words] == NULL)
		{
			for (k = 0; k < words; k++)
			{
				free(strMalloc[k]);
			}
			free(strMalloc);
			return (NULL);
		}
		strncpy(strMalloc[words], &str[j], i - j);
		strMalloc[words][i - j] = '\0';
		words++;
	}
	strMalloc[words] = NULL;
	return (strMalloc);
}
