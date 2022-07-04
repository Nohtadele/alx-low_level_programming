#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function
 * Description: Initializes the value of struct dog members
 * @d: a pointer to the specific struct dog
 * @name: a pointer to the name of the dog
 * @age: Age of the dog
 * @owner: a pointer to the owner of the dog
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
