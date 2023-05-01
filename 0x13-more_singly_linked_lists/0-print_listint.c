#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Print every element in a list
 * @h: Pointer to a linked list(listint_t)
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", (*h).n);
		i++;
		h = (*h).next;
	}
	return (i);
}
