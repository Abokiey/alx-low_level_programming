#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: pointer to the table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int indx;
	hash_node_t *curr1, *curr2;

	if (ht == NULL)
		return;

	for (indx = 0; indx < ht->size; indx++)
	{
		curr1 = ht->array[indx];
		while ((curr2 = curr1) != NULL)
		{
			curr1 = curr1->next;
			free(curr2->key);
			free(curr2->value);
			free(curr2);
		}
	}
	free(ht->array);
	free(ht);
}
