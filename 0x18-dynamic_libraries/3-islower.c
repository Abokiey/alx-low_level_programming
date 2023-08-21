#include "main.h"

/**
 * _islower - check if a character is lowercase
 * Return: return 1 if lowercase and 0 if otherwise
 * @c: true or false
 */

int _islower(int c)

{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
