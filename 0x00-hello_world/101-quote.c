#include <unistd.h>

/**
  * main - Entry point
  * Description: prints and that piece of art is useful"
  *	- Dora Korpar, 2015-10-19 to standard error
  * Return: 1 error message
  */
int main(void)
{
	char const *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, message, 59);
	return (1);
}
