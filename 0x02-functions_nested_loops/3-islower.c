#include "main.h"

/**
 * _islower - function
 * Checks whether a character is lowercase or not
 * Return: void - success
 */
int _islower(int c)
{
	char ch;
	ch = c;

	if (ch >= 'a' && ch <= 'z')
		return (1);
	else
		return (0);
}
