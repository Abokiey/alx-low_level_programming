#include"hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 * Return: array of a list
 *
 */
void hash_table_print(const hash_table_t *ht)
{

	unsigned long int indx;
	hash_node_t *curr;
	char *comma;

	if (ht == NULL)
		return;

	printf("{");
	comma = "";

	for (indx = 0; indx < ht->size; indx++)
	{
		curr = ht->array[indx];
		while (curr != NULL)
		{
			printf("%s'%s': '%s'", comma, curr->key, curr->value);
			comma = ", ";
			curr = curr->next;
		}
	}
	printf("}\n");
}
