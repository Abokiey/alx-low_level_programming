#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - Sum of all nodes in listint_t
 * @head: Pointer to the head of the listint_t
 * Return: Sum of all the nodes
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	while (head)
	{
		add = add + ((*head).n);
		head = (*head).next;
	}
	return (add);
}
