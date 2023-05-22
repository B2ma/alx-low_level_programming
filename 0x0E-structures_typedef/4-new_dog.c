#include "dog.h"
#include<stdlib.h>

/**
  * new_dog - creates new dog
  * @name: pointer to name
  * @age: age details
  * @owner: pointer to owner details
  * Return: the struct pointer
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *anotherDog;

	anotherDog = malloc(sizeof(dog_t));
	if (anotherDog == NULL)
		return (NULL);
	anotherDog->name = name;
	anotherDog->age = age;
	anotherDog->owner = owner;
	return (anotherDog);
}
