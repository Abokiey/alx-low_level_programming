#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list_t
 * @head: Pointer to list to to be free
 */

void free_list(list_t *head)

{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}

