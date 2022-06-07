#include <unistd.h>
#include "main.h"

/**
 * main - start point
 * Print _putchar
 * return: 0 success
 */
int main(void)
{
	int i;
	char pchar[8] = "_putchar";

	for (i = 0 ; i < 8 ; i++)
		_putchar(pchar[i]);
	_putchar('\n');

	return (0);
}
