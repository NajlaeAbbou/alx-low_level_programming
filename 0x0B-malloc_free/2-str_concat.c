#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, sz1, sz2, sz;
	char *result;

	sz1 = sz2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			sz1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			sz2++;
	}

	sz = sz1 + sz2;
	result = (char *)malloc(sizeof(char) * (sz + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < sz1; i++)
		result[i] = s1[i];
	for (j = 0; j < sz2; j++, i++)
		result[i] = s2[j];
	result[sz] = '\0';

	return (result);
}
