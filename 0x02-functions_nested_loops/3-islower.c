#include "main.h"

/**
 * _islower - function
 * Checks whether a character is lowercase or not
 * c - is the passed value of the character to check
 * Return: void - success
 */
int _islower(int c)
{
	char ch = c;

	if (ch >= 'a' && ch <= 'z')
		return (1);
	else
		return (0);
}
