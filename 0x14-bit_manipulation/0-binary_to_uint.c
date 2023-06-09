#include "main.h"

/**
 * binary_to_uint - xxx.
 * @b: xxx
 *
 * Return: xxx
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int c = 0;

	
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		c <<= 1;
		if (b[i] == '1')
			c += 1;
	}
	return (j);
}
