#include "main.h"
#include <stdio.h>
/**
 * get_endianness - function checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int test = 1;
	char *ch = (char *) &test;

	return (*ch);
}
