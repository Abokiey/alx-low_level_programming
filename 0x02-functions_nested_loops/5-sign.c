#include "main.h"
/**
 * print_sign - prints signs of number
 * Return: return 1, 0, -1 if conditions are met
 * @n: guven global variable
 */


int print_sign(int n)

{

	if (n > 0)
	{
		_putchar('+');

	return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
	return (0);
	}

	else
	{
		_putchar('-');
	return (-1);
	}


}
