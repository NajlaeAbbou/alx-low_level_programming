#include "main.h"

/**
 * print_binary - xxx
 * @n: xxx
 * Return: xxx
 */
void print_binary(unsigned long int n)
{
	unsigned long int dev, result;
	char flag = 0, pow;
  unsigned int i;

	
  
	

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
