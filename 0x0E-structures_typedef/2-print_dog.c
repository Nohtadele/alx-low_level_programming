#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - function
 * Description: Prints the information of the dog
 * @d: a pointer to the structure of the dog information
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %1f\nOwner: %s\n", d->name, d->age, d->owner);
}
