#include "main.h"

/**
 * _isdigit - determines wether value is a digit or not
 * @c: variable
 * Return: 1 if true and 0 if false
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);

}
