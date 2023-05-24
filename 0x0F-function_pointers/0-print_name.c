#include "function_pointers.h"

/**
  * print_name - function that prints name.
  * @name: the string array containing name
  * @f: function pointer that takes is name
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
