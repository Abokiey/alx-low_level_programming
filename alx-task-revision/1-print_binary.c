#include "main.h"

/**
 * print_binary - This function Prints the binary representation of a number
 * @n: The Number to be converted
 */

void print_binary(unsigned long int n)
{
	if (n > 1)

		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
