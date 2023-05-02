#include "lists.h"
#include <stdlib.h>


/**
 * insert_nodeint_at_index - Insert a new node at a point
 * @head: Pointer to head pointer of listint_t
 * @idx: Index to insert the node
 * @n: New node's data
 * Return: Address of new node and NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	unsigned int i = 0;
	listint_t *new, *cpy;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	(*new).n = n;

	if (idx == 0)
	{
		(*new).next = *head;
		*head = new;
		return (new);
	}

	cpy = *head;
	while (i < (idx - 1))
	{
		cpy = (*cpy).next;
		i++;

		if (cpy == NULL)
		{
			free(new);
			return (NULL);
		}
	}

	(*cpy).next = (*cpy).next;
	(*cpy).next = new;
	return (new);
}
