#include "main.h"
#include <stdlib.h>

void fetchword(char **, char *);
void create_word(char **, char *, int, int, int);

/**
 * strtow - splits a string into words.
 * @str: the string
 *
 * Return: returns a pointer to an array of strings.
 */
char **strtow(char *str)
{
	int i, mark, sz;
	char **words;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	i = mark = sz = 0;
	while (str[i])
	{
		if (mark == 0 && str[i] != ' ')
			mark = 1;
		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			mark = 0;
			sz++;
		}
		i++;
	}

	sz += mark == 1 ? 1 : 0;
	if (sz == 0)
		return (NULL);

	words = (char **)malloc(sizeof(char *) * (sz + 1));
	if (words == NULL)
		return (NULL);

	fetchword(words, str);
	words[sz] = NULL;
	return (words);
}

/**
 * fetchword - fetching words into an array
 * @words: the strings array
 * @str: the string
 */
void fetchword(char **words, char *str)
{
	int i, j, start, mark;

	i = j = mark = 0;
	while (str[i])
	{
		if (mark == 0 && str[i] != ' ')
		{
			start = i;
			mark = 1;
		}

		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			create_word(words, str, start, i, j);
			j++;
			mark = 0;
		}

		i++;
	}

	if (mark == 1)
		create_word(words, str, start, i, j);
}

/**
 * create_word - creates a word and insert it into the array
 * @words: array of strings
 * @str: string
 * @start: the starting index of the word
 * @end: the stopping index of the word
 * @index: the index of the array to insert the word
 */
void create_word(char **words, char *str, int start, int end, int index)
{
	int i, j;

	i = end - start;
	words[index] = (char *)malloc(sizeof(char) * (i + 1));

	for (j = 0; start < end; start++, j++)
		words[index][j] = str[start];
	words[index][j] = '\0';
}
