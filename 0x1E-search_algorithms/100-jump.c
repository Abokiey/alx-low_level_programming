#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>

/**
 * jump_search - search for value ina sorted array
 * @array: pointer to the 1st element of the array
 * @size: no of elements of the array
 * @value: value to search for
 * Return: the value if found or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t index, jumps, prev_index;

	if (array == NULL || size == 0)
		return (-1);

	jumps = sqrt(size);
	for (index = prev_index = 0; prev_index < size && array[prev_index] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", prev_index, array[prev_index]);
		index = prev_index;
		prev_index += jumps;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", index, prev_index);

	prev_index = prev_index < size - 1 ? prev_index : size - 1;
	for (; index < prev_index && array[index] < value; index++)
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
	printf("Value checked array[%ld] = [%d]\n", index, array[index]);

	return (array[index] == value ? (int)index : -1);
}
