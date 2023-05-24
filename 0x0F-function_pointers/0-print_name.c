#include "function_pointers.h"

/**
 * print_name - function prints a name.
 * @name: name of the person
 * @f: function of name
 *
 * Rteurn: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
