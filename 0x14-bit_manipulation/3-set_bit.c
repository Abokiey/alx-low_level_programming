#include "main.h"
#include <stdio.h>

/**
 * set_bit - This sets the value of a bit at a given index to 1.
 * @n: pointer to the bit in the index.
 * @index: index where the value will be given
 *
 * Return: 1 If it works or -1 if it doesnt work
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
