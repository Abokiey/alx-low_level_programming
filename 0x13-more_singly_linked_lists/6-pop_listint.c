#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Delete the head node of a list listint_t
 * @head: Head of the list listint_t
 * Return: Return - nodes head
 */

int pop_listint(listint_t **head)
{
	listint_t *curr;
	int rem;

	if (*head == NULL)
		return (0);

	curr = *head;
	rem = (*curr).n;
	*head = (*curr).next;

	free(curr);
	return (rem);
}
