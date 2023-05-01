#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - return number of elements in a linked list
 * @h: Pointer to the head of the list
 * Return: The Number of Elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = (*h).next;

	}
	return (i);


}
