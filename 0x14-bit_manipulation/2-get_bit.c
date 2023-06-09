#include "main.h"
#include <stdio.h>

/**
 * get_bit - gets the value of a bit at index
 * @n: bit number.
 * @index: index of the binary number
 * Return: value of the bits or 0 if the is an error
 */
int get_bit(unsigned long int n, unsigned int index)

{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
