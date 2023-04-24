#include<stdio.h>

/**
  * main - Entry point
  * Description: putchar prints the lowercase alphabet in reverse
  * Return: Always 0 (Success)
  */
int main(void)
{
	char alph;

	alph = 'z';
	for (alph = 'z' ; alph >= 'a'; alph--)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
