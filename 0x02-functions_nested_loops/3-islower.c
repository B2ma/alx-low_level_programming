#include "main.h"
/**
  * _islower - checks for lowercase c character
  * @c: given letters from where we check for c
  * Return: 1 if c is lowercase, 0 otherwise
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
