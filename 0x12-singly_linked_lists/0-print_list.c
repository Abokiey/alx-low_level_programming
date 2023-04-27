#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * print_list - Prints all elements  of a list
 * @h: Pointer to a structure of type to print
 * Return: Number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		n++;
	}
	return (n);
}
