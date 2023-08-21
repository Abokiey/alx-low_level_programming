#include "main.h"
/**
 * _abs - making any number absolute
 * Return: return 0
 * @i: global parameter
 */

int _abs(int i)

{
	if (i < 0)
		i = -(i);

	else if (i > 0)
		i = i;
	return (i);

}
