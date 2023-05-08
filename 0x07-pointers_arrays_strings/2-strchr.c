#include "main.h"

/**
  * _strchr - locates a character in a string
  * @s: the string where we need to locate acharacter
  * @c: the character to be located
  * Return: a pointer to the first occurrence of the character
  *	c in the string s, or NULL if the character is not found
  */
char *_strchr(char *s, char c)
{
	int j = 0;

	for (; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
