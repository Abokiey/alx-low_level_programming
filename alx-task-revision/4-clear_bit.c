#include "main.h"

/**
 * clear_bit - the function sets the value of a bit at any index to 0.
 * @n: A pointer to the bit.
 * @index: the index starts at 1
 *
 * Return: 1 if it worked and -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	unsigned int j;

	if (index > 63)
		return (-1);

	j = 1 << index;

	if (*n & j)
		*n ^= j;

	return (1);
}
