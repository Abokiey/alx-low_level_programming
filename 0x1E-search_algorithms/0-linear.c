#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - search for a value in an array
 * @array: the array to search the value
 * @size: number of elements in the array
 * @value: the number to look for
 * Return: the number searched for
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, *array);
		if (*(array + i) == value)
			return (i);
		array++;
	}
	return (-1);
}
