#include "search_algos.h"

/**
  * jump_search - Searches for a value in array using jump search
  * @array: A pointer to the first element
  * @size: The number of elements
  * @value: The value to search for
  * Return: If the value is not present or the array is NULL, -1.
  * Otherwise, the first index where the value is located.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t s, jp, sp;

	if (array == NULL || size == 0)
		return (-1);

	sp = sqrt(size);
	for (s = jp = 0; jp < size && array[jp] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jp, array[jp]);
		s = jp;
		jp += sp;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", s, jp);

	jp = jp < size - 1 ? jp : size - 1;
	for (; s < jp && array[s] < value; s++)
		printf("Value checked array[%ld] = [%d]\n", s, array[s]);
	printf("Value checked array[%ld] = [%d]\n", s, array[s]);

	return (array[s] == value ? (int)s : -1);
}
