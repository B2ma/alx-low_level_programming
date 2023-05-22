#ifndef HEADER_FILE
#define HEADER_FILE

/**
  * struct dog - my created structure
  * @name: name details
  * @age: Age details
  * @owner: owner details
  * Destription: this give the details of a particular dog
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
