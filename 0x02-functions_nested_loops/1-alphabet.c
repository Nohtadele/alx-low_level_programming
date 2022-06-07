#include "main.h"

/**
 * print_alphabet - function
 * Description: Print lowercase alphabets
 * Return: void - success
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
