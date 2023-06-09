#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a node to the beginning of list_t
 * @head: Pointer to pointer to the head node
 * @str: String to be added to list
 * Return: Address of the new element
 */

list_t *add_node(list_t **head, const char *str)

{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len])
	len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (new_node);
}

