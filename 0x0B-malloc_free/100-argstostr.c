#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: count
 * @av: vector
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str, *s;
	int i, j, k, sz = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		s = av[i];
		j = 0;

		while (s[j++])
			sz++;
		sz++;
	}

	str = (char *)malloc(sizeof(char) * (sz + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac && j < sz; i++)
	{
		s = av[i];
		k = 0;

		while (s[k])
		{
			str[j] = s[k];
			k++;
			j++;
		}
		str[j++] = '\n';
	}
	str[j] = '\0';

	return (str);
}
