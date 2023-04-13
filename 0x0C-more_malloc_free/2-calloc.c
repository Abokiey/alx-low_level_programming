#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory
 * @nmemb: allocates memory of an array
 * @size: allocates size in bytes
 * Return: returns pointer to the allocated memory
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *str;
	unsigned int a;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);

	for (a = 0; a < (nmemb * size); a++)
		str[a] = 0;
	return (str);
}
