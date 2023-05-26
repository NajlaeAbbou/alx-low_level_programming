#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	int fl;
	char *str;
	va_list a;

	va_start(a, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(a, int));
				fl = 0;
				break;
			case 'i':
				printf("%i", va_arg(a, int));
				fl = 0;
				break;
			case 'f':
				printf("%f", va_arg(a, double));
				fl = 0;
				break;
			case 's':
				str = va_arg(a, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				fl = 0;
				break;
			default:
				fl = 1;
				break;
		}
		if (format[i + 1] != '\0' && fl == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(a);
}
