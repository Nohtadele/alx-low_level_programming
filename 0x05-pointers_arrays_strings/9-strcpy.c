#include "main.h"

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
	while (*src)
		*dest++ = *src++;
	return (tmp);
}
