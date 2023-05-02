#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - n'th node of listint_t
 * @head: Pointer to the head of the listint_t
 * @index: Index of the node to be returned
 * Return: Pointer to the n'th node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head && (i <= index))
	{
		if (i == index)
			return (head);

		head = (*head).next;
		i++;
	}
	return (NULL);
}
