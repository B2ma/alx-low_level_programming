#include<stdio.h>

/**
  * main - Entry point
  * Description: put char prints the alphabet in lowercase except q and e
  * Return: 0 always (Success)
  */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
	if (alphabet != 'q' && alphabet != 'e')
	{
		putchar(alphabet);
	}
	alphabet++;
	}
	putchar('\n');
	return (0);
}
