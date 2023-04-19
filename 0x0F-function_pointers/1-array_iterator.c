#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that prints each array element
 * @array: pointer to the array to iterate
 * @size: size of the array
 * @action: pointer to the function to apply to each element
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

