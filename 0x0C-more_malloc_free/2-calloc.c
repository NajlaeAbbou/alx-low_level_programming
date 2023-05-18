#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc .
 *
 * @nmemb: allocate memory for array
 * @size: allocate element of size bytes
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (a = 0; a < (nmemb * size); a++)
		s[a] = 0;
	return (s);
}
