#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_all - prints anything
  * @format: the list of arguments passed to the function
  */
void print_all(const char * const format, ...)
{
	va_list ap;
	const char *form = format;
	char c;
	int i;
	float f;
	char *s;

	va_start(ap, format);
	while (*form)
	{
		if (*form == 'c')
		{
			c = va_arg(ap, int);
			printf("%c", c);
		}
		else if (*form == 'i')
		{
			i = va_arg(ap, int);
			printf("%d", i);
		}
		else if (*form == 'f')
		{
			f = va_arg(ap, double);
			printf("%f", f);
		}
		else if (*form == 's')
		{
			s = va_arg(ap, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
		form++;
		if (*(form + 1))
			printf(", ");
	}
	va_end(ap);
	printf("\n");
}
