#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - delete a node of a listint_t at an index
 * @head: pointer to the 1st element listint_t
 * @index: index of the node to be deleted
 *
 * Return: 1 if Successful, and -1 Failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *curr = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tmp || !((*tmp).next))
			return (-1);
		tmp = (*tmp).next;
		i++;
	}


	curr = (*tmp).next;
	(*tmp).next = (*curr).next;
	free(curr);

	return (1);
}

