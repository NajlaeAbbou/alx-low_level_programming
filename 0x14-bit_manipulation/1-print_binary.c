#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: num of prented
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int dev, result;
	unsigned int pow, i;
	char flag;

	flag = 0;
	dev = 1;
	pow = sizeof(unsigned long int) * 8 - 1;
	for (i = 1; i <= pow; i++)
		dev *= 2;
	while (dev != 0)
	{
		result = n & dev;
		if (result == dev)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
	}
}
