#include "dog.h"
#include <stdlib.h>

char *_strcpy(char *dest, char *src);
int _strlen(char *s);

/**
 * _strcpy - function
 * Description: Copy string value of a variable to another variable
 * @dest: destination to paste the copies of source string value
 * @src: source of the string value to be copied
 * Return: pointer value of the destination array
 */
char *_strcpy(char *dest, char *src)
{
	char *tmp = dest;
	int i, len;

	len = _strlen(src);
	for (i = 0 ; i <= len ; i++)
		*dest++ = *src++;
	*dest = '\0';
	return (tmp);
}

/**
 * _strlen - function
 * Description: Legth of a string input
 * @s: Character string input
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	return (i);
}

/**
 * new_dog - struct function
 * Description: Creates a new dog entry
 * @name: a pointer to the name of the dog
 * @age: Age of the dog
 * @owner: a pointer to the owner of the dog
 * Return: a pointer to the new dog information
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *noha_dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	noha_dog = malloc(sizeof(dog_t));
	if (noha_dog == NULL)
		return (NULL);
	noha_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (noha_dog->name == NULL)
	{
		free(noha_dog);
		return (NULL);
	}
	noha_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (noha_dog->owner == NULL)
	{
		free(noha_dog->name);
		free(noha_dog);
		return (NULL);
	}
	noha_dog->name = _strcpy(noha_dog->name, name);
	noha_dog->age = age;
	noha_dog->owner = _strcpy(noha_dog->owner, owner);
	return (noha_dog);
}
