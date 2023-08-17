#include "lists.h"
#include <stddef.h>
/**
 * free_dlistint - Frees the dlistint_t
 * @head: Pointer to the doubly linked list dlistint_t
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	if (temp == NULL)
		return;

	while (temp != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
