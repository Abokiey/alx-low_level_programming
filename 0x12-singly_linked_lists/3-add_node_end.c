#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds an additional node at the end of a list
 * @head: Pointer to pointer to the head
 * @str: String to be duplicated
 * Return: Pointer to the new Node
 */

list_t *add_node_end(list_t **head, const char *str)

{
	size_t len;
	list_t *temp, *New;

	New = malloc(sizeof(list_t));

	if (New == NULL)
		return (NULL);
	New->str = strdup(str);
	for (len = 0; str[len]; len++)
		;
	New->len = len;
	New->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = New;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = New;
	}
	return (New);
}
