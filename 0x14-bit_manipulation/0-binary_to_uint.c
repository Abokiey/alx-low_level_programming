#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert binary toan  unsigned int
 * @b: binary number
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{

	int j;
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0')
			return (0);

		if (b[j] > '1')
			return (0);

		num = 2 * num + (b[j] - '0');


	}
	return (num);

}
