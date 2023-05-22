#include "dog.h"
#include<stdlib.h>
#include<string.h>

/**
  * new_dog - creates new dog
  * @name: pointer to name
  * @age: age details
  * @owner: pointer to owner details
  * Return: the struct pointer
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *anotherDog = malloc(sizeof(dog_t));

	if (anotherDog == NULL)
	{
		return (NULL);
	}
	anotherDog->name = (name != NULL) ? strdup(name) : NULL;
	if (name != NULL && anotherDog->name == NULL)
	{
		free(anotherDog);
		return (NULL);
	}
	anotherDog->owner = (owner != NULL) ? strdup(owner) : NULL;
	if (owner != NULL && anotherDog->owner == NULL)
	{
		free(anotherDog->name);
		free(anotherDog);
		return (NULL);
	}
	if (age <= 0)
	{
		free(anotherDog->name);
		free(anotherDog->owner);
		free(anotherDog);
		return (NULL);
	}
	anotherDog->age = age;
	return (anotherDog);
}
