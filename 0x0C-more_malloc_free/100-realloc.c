#include "main.h"
#include <stdlib.h>

/**
* _realloc - reallocates a memory block
* @ptr: pointer to the memory previously allocated
* @old_size:is the size of the allocated memory
* @new_size: the new size of the new memory
* Return: pointer to allocate new size memory, or NULL
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, j = new_size;
	char *oldptr = ptr;

	if (ptr == NULL)
	{
	p = malloc(new_size);
	return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
	j = old_size;
	for (i = 0; i < j; i++)
		p[i] = oldptr[i];
	free(ptr);
	return (p);
}

