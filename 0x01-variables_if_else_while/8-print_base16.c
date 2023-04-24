#include<stdio.h>

/**
  * main - Entry point
  * Description: using putchar to print all the numbers
  *	of base 16 in lowercase
  * Return: Always 0 (Success)
  */
int main(void)
{
	char hexa;

	hexa = '0';
	while (hexa <= 'f')
	{
		putchar(hexa);
		hexa++;
	}
	putchar('\n');
	return (0);
}
