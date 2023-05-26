#include "variadic_functions.h"

/**
 * sum_them_all -  function that returns the sum of all its parameters.
 * @n: the number of parameters.
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list a;

	va_start(a, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(a, int);

	va_end(a);

	return (sum);
}
