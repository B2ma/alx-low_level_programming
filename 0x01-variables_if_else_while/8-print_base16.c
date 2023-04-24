#include<stdio.h>

/**
  * main - Entry point
  * Description: using putchar to print all the numbers
  *	of base 16 in lowercase
  * Return: Always 0 (Success)
  */
int main(void)
{
	int hexa;

	for (hexa = 0; hexa < 16; hexa++)
	{
	if (hexa < 10)
	{
		putchar(hexa + '0');
	}
	else
	{
		putchar(hexa - 10 + 'a');
	}
	}
	putchar('\n');
	return (0);
}
