#include "lists.h"
/**
 * sum_dlistint - sum of the whole list
 * @head: pointer to the first ode
 *
 * Retur: the sum of the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
