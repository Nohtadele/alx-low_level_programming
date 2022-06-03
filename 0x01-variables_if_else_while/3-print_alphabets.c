#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * print letters in both upper and lower case
 * Return: 0 success
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; low <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
