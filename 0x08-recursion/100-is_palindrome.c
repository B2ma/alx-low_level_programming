#include "main.h"

/**
  * is_palindrome - returns 1 if a string is a palindrome and 0 if not
  * @s: the string to be checked
  * Return: 1 if true,0 otherwise
  */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	if (*s == '\0')
	{
		return (0);
	}
	if (*s != *(s + length - 1))
	{
		return (0);
	}
	is_palindrome(s + 1);
	return (1);
}
/**
 * _strlen_recursion - returns the length of string
 * @s: the string to calculate the length
 * Return: String length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
