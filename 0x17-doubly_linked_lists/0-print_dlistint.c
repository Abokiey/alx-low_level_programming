#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - prints all the ellements of a doubly linked list
 * @h: pointer to the header of the list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *curr = h;

	if (h == NULL)
		return (len);
	while (curr->next != NULL)
	{
		printf("%d\n", curr->n);
		len++;
		curr = curr->next;
	}
	if (curr->next == NULL)
	{
		printf("%d\n", curr->n);
		len++;
	}
	return (len);
}
