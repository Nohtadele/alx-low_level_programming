#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * print letters in lower case except q and e
 * Return: 0 success
 */
int main(void)
{
	char low;

	for (low = 'a' ; low <= 'z' ; low++)
	{
		if (low != 'q' && low != 'e')
			putchar(low);
	}
	putchar('\n');
	return (0);
}
