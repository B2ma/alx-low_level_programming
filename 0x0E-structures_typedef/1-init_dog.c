#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - initializes the struct dog
  * @d: pointer to the struct dog
  * @name: pointer to the name details
  * @age: the age deatils
  * @owner: pointer to the owner details
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->owner = owner;
	d->age = age;
}
