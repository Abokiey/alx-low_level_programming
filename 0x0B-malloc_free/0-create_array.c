#include <stdlib.h>
#include "main.h"
/**
 * create_array - create an array of characters
 * @c: character to be assigned
 * Return: pointer to array or null if false
 * @size: size of array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

