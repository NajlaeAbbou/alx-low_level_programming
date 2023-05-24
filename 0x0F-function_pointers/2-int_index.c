#include "function_pointers.h"

/**
  * int_index - a function that searches for an integer.
  * @array: array
  * @size: the number of elements in the array 
  * @cmp: pointer to the function to be used to compare values
  *
  * Return: if size <= 0, return -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (a < size)
			{
				if (cmp(array[a]))
					return (a);

				a++;
			}
		}
	}

	return (-1);
}
