#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function
 * Description: Frees the memory held by the dog struct
 * @d: a pointer to the dog struct
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
