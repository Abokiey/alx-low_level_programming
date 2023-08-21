#include "main.h"
/**
 * _isalpha - deetermine wether character is alphabet
 * @c: determine wether true or false
 * Return: return 1 if true or 0 if false
 */


int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);

}

