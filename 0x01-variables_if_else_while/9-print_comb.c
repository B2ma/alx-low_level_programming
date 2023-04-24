#include<stdio.h>

/**
  * main - Entry point
  * Description: program uses putchar to print all possible combinations of
  *	single-digit numbers must be separated by ,followed by a space
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	if (i < 9)
	{
		putchar (',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
