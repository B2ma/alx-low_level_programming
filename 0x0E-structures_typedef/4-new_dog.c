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
	if (name != NULL)
	{
		anotherDog->name = strdup(name);
		if (anotherDog->name == NULL)
		{
			free(anotherDog);
			return (NULL);
		}
	}
	else
	{
		anotherDog->name = NULL;
	}
	if (owner != NULL)
	{
		anotherDog->owner = strdup(owner);
		if (anotherDog->owner == NULL)
		{
			free(anotherDog->name);
			free(anotherDog);
			return (NULL);
		}
	}
	else
	{
		anotherDog->owner = NULL;
	}
	anotherDog->age = age;
	return (anotherDog);
}
