#include "main.h"

/**
 * _isupper - checks wether character is uppercase
 * @c: global variable
 * Return: always 1 or 0 if false
 */


int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);


}
