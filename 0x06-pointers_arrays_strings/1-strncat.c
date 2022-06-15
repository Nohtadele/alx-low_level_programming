#include "main.h"

/**
 * _strncat - function
 * Description: Merge two strings together without end of character \0
 * @dest: pointer to the first string value
 * @src: pointer to the second string value
 * Return: pointer value of the merged strings
 */
char *_strncat(char *dest, char *src, int n)
{
	int count1, count2, x, tmp;

	count1 = 0;
	count2 = 0;
	while (*(dest + count1) != '\0')
		count1++;
	while (*(src + count2) != '\0')
		count2++;
	if (n < count2)
		tmp = n;
	else
		tmp = count2;
	for (x = 0 ; x < tmp ; x++)
	{
		*(dest + count1) = *(src + x);
		count1++;
	}
	return (dest);
}
