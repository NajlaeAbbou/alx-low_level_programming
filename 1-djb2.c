#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2
 * @str: string
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int h;
	int s;

	h = 5381;
	while ((s = *str++))
	{
		h = ((h << 5) + h) + s;
	}
	return (h);
}
