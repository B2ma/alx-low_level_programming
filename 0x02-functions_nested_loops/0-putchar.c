#include "main.h"

/**
  * main - Entry point
  * Description: Without the use of stardand library
  *	this program uses putchar to print _putchar
  * Return: Always 0 (Success)
  */
int main(void)
{
	char str[] = "_putchar\n";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}

