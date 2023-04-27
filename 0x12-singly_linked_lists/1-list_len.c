#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Counts the number of elements in an array
 * @h: Pointer to a list of type list_t
 * Return: Number of elements n
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
