#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 *advanced_binary_recursive - search values using adv binary
 * @array: the array to check
 * @left: left side of the list
 * @right: right side of the list
 * @value: the value to check
 * Return: the array or -1 if false
 */

int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t j;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (j = left; j < right; j++)
		printf("%d, ", array[j]);
	printf("%d\n", array[j]);

	j = left + (right - left) / 2;
	if (array[j] == value && (j == left || array[j - 1] != value))
		return (j);
	if (array[j] >= value)
		return (advanced_binary_recursive(array, left, j, value));
	return (advanced_binary_recursive(array, j + 1, right, value));
}

/**
 * advanced_binary - searrch for the values
 * @array: the array to check
 * @size: size of the array
 * @value: the value to check
 * Return: 0 if true or -1 if false
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
