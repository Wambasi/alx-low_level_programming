#include <math.h>
#include "search_algos.h"

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t step = sqrt(size);
	size_t prev_index = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (prev_index < size && array[prev_index] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev_index, array[prev_index]);
		i = prev_index;
		prev_index += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, prev_index);

	if (prev_index >= size - 1)
		prev_index = size - 1;

	while (i < prev_index && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i++;
	}

	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	if (array[i] == value)
		return (i);

	else
		return (-1);
}
