#include "main.h"
#include <stdlib.h>

int count_letters(char *str);
int count_words(char *str);

/**
 * strtow - function
 * Description: splits a string into words
 * @str: a pointer to the string
 * Return: a pointer to an array of strings / words
 */
char **strtow(char *str)
{
	char **s;
	int i, wordcount, wordindex, lettercount, letterindex;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	wordcount = count_words(str);
	if (wordcount == 0)
		return (NULL);
	s = malloc(sizeof(char *) * (wordcount + 1));
	if (s == NULL)
		return (NULL);
	for (wordindex = 0 ; wordindex < wordcount ; wordindex++)
	{
		while (str[i] == ' ')
			i++;
		lettercount = count_letters(str + i);
		s[wordindex] = malloc(sizeof(char) * (lettercount + 1));
		if (s[wordindex] == NULL)
		{
			for (; wordindex >= 0; wordindex--)
				free(s[wordindex]);
			free(s);
			return (NULL);
		}
		for (letterindex = 0 ; letterindex < lettercount ; letterindex++)
			s[wordindex][letterindex] = str[i++];
		s[wordindex][letterindex] = '\0';
	}
		s[wordindex] = NULL;
		return (s);
}

/**
 * count_letters - function
 * Description: counts letters in a single word
 * @str: a pointer to the string
 * Return: ammount of letters / bytes to allocate for the string
 */
int count_letters(char *str)
{
	int i = 0, size = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		size++;
		i++;
	}
	return (size);
}

/**
 * count_words - function
 * Description: counts the number of words which are in the string
 * @str: a pointer to the string
 * Return: ammount of words in the string
 */
int count_words(char *str)
{
	int i = 0, words = 0, size = 0;

	for (i = 0; *(str + i); i++)
		size++;
	for (i = 0; i < size; i++)
	{
		if (*(str + i) != ' ')
		{
			words++;
			i += count_letters(str + i);
		}
	}
	return (words);
}
