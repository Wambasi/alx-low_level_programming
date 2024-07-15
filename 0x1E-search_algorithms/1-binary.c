#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
	size_t mid, left = 0, right = size - 1;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		printf("Searching in array: ");
			for (i = left; i <= right; i++)
			{
				printf("%d", array[i]);
				if (i < right)
				{
					printf(", ");
				}
				else
				{
					printf("\n");
				}
			}
		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
