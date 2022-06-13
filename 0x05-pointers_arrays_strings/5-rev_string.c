#include "main.h"

/**
 * rev_string - function
 * Description: Print string in reverse
 * @s: pointer points to the string value
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, count;
	char tmp;

	count = 0;
	while (*(s + count) != '\0')
		count++;
	for (i = 0 ; i < count / 2 ; i++)
	{
		tmp = *(s + ((count - 1) - i));
		*(s + ((count - 1) - i)) = *(s + i);
		*(s + i) = tmp;
	}
}
