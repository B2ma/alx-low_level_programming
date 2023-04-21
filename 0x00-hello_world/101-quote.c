#include <unistd.h>

/**
  * main - Entry point
  * Description: prints and that piece of art is useful"
  *	- Dora Korpar, 2015-10-19 to standard error
  * Return: 1 error message
  */
int main(void)
{
	write(STDERR_FILENO, "and that piece of art is useful\" - ", 35);
	write(STDERR_FILENO, "Dora Korpar, 2015-10-19\n", 25);
	return (1);
}
