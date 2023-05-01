#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Free listint_t.
 *
 * @head: Pointer to the head
 */

void free_listint(listint_t *head)
{
	listint_t *curr;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		curr = head;
		head = (*head).next;
		free(curr);
	}


}
