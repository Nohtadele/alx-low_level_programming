#include <stdio.h>
/**
 * main - entry point
 * Prints lower case alphabets in reverse
 * Return: 0 success
 */
int main(void)
{
	char alf;

	for (alf = 'z' ; alf >= 'a' ; alf--)
	{
		putchar(alf);
	}
	putchar('\n');
	return (0);
}
