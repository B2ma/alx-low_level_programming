#include<stdio.h>

/**
  * main -Entry point
  * Description: uses putchar to print the alphabet in lowercase
  *	and then in uppercase
  * Return: Always 0 (Success)
  */
int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet++);
	}
	alphabet = 'A';
	while (alphabet <= 'Z')
	{
		putchar(alphabet++);
	}
	putchar('\n');
	return (0);
}
