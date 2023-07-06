#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function returns the number of bits needed to flip from n to m.
 * @n: first operand
 * @m: second operand
 *
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits_no;

	for (bits_no = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bits_no++;
	}

	return (bits_no);
}
