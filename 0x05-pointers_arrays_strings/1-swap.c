#include "main.h"
/**
 * swap_int - swap values
 * @a: pointer
 * @b: second pointer
 */

void swap_int(int *a, int *b)

{
	int c;

	c = *a;
	*a = *b;

	*b = c;

}
