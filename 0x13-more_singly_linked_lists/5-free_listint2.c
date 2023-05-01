#include <stdlib.h>
#include "lists.h"
#include <stdio.h>


/**
 * free_listint2 - Frees a listint_t
 * @head: Pointer to pointer to head
 */

void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		curr = *head;
		*head = (*curr).next;
		free(curr);
	}
	*head = NULL;
}
