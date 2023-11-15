#include "search_algos.h"

/**
  * interpolation_search - Searches for a value using interpolation search.
  * @array: A pointer to the first element
  * @size: The number of elements
  * @value: The value to search for
  * Return: If the value is not present or the array is NULL, -1.
  * Otherwise, the first index where the value is located.
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t s, lt, rt;

	if (array == NULL)
		return (-1);

	for (lt = 0, rt = size - 1; rt >= lt;)
	{
		s = lt + (((double)(rt - lt) / (array[rt] - array[lt])) * (value - array[lt]));
		if (s < size)
			printf("Value checked array[%ld] = [%d]\n", s, array[s]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", s);
			break;
		}

		if (array[s] == value)
			return (s);
		if (array[s] > value)
			rt = s - 1;
		else
			lt = s + 1;
	}

	return (-1);
}
