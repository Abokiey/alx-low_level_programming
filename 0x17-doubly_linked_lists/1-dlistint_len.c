#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - counts the number of elements
 * @h: header to the linked list
 *
 * Return: the length of the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *curr = h;

	if (h == NULL)
		return (len);
	while (curr->next != NULL)
	{
		curr = curr->next;
		len++;
	}
	len++;
	return (len);
}
