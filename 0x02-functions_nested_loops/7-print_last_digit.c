#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * Return: return the last digit
 *@n: global variable
 */


int print_last_digit(int n)

{
	int m = n % 10;

	if (m < 0)
		m = -m;
	return (m);

}
