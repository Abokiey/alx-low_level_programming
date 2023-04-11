#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: always 0
 */

char *_strdup(char *str)

{
	char *str_array;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	str_array = malloc(sizeof(char) * (i + 1));

	if (str_array == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		str_array[j] = str[j];

	return (str_array);
}

