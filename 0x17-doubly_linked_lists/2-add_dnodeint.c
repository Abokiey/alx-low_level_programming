#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a node to the list
 * @n: data to be added to the list
 * @head: head of the list
 * Return: the new list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);

}
