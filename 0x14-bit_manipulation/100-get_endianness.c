#include "main.h"
/**
 * get_endianness - xxx
 *
 * Return: xxx
 */
int get_endianness(void)
{
	int a;
	char *s;

	a = 1;
	s = (char *)&a;

	return (*s);
}
