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
	size_t index = 0;

	if (!array || size == 0)
		return (-1);

	while (index < size)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		index++;
	}
	return (-1);
}
