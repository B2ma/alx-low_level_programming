#include "dog.h"
#include <stdio.h>

/**
  * print_dog - prints a struct dog
  * @d: pointer to struct dog
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("%s\n", d->name != NULL ? d->name : "(nil)");
	printf("%f\n", d->age);
	printf("%s\n", d->owner != NULL ? d->owner : "(nil)");
}
