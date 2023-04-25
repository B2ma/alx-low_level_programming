#include "main.h"

/**
  * Description: _isalpha Returns 1 if c is a letter
  *	lowercase or uppercase and Returns 0 otherwise
  * Return: 1 if c is letter 0 otherwise
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
