#include "search_algos.h"

int binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (1);

	if (array[i] >= value)
		return (binary_recursive(array, left, i, value));
	return (binary_recursive(array, i + 1, right, value));
}

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (binary_recursive(array, 0, size - 1, value));
}
