#include<stdio.h>

/**
  * main - Entry point
  * Description: prints exactly and that piece of art is useful"
  *	- Dora Korpar,2015-10-19, followed by a new line, to the standard error.
  * Return: Always 0 (Success)
  */
int main(void)
{
	fwrite(STDERR_FILENO, "and that piece of art is useful\" \- Dora Korpar, 2015\-10\-19\n", sizeof("and that piece of art is useful\" \- Dora Korpar, 2015\-10\-19\n") -1);
	return(0);
