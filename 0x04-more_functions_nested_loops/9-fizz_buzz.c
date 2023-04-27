#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 success
 */
int main(void)
{
	int i = 1;
	int chars_printed = 0;

	while (i <= 100)
	{
		int chars_to_print;

		if (i % 3 == 0 && i % 5 == 0)
		{
			chars_to_print = 8;
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			chars_to_print = 5;
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			chars_to_print = 5;
			printf("Buzz ");
		}
		else
		{
			chars_to_print = printf("%d ", i);
		}
		chars_printed += chars_to_print;
		if (chars_printed >= 143)
		{
			putchar('\n');
			chars_printed = 0;
		}
		i++;
	}
	putchar('\n');
	return (0);
}

