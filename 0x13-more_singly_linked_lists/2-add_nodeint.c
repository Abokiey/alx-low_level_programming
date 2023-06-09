#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - Add a newnode to the beginning
 * @head: Pointer to pointer to the node
 * @n: Value of the new list
 * Return: Returns a pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);


	(*new_node).n = n;
	(*new_node).next = *head;
	*head = new_node;

	return (*head);


}
