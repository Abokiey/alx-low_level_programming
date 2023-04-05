#include "main.h"

/**
 * _sqrt_recursion- sqrt recursion
 * @n: number to be square rooted
 * Return: always 0
 */


int _sqrt_recursion(int n)

{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}


/**
 * real_sqrt_recursion - recursion to find the natural number
 * square root of a number
 * @n: calculate the sqaure root from the number
 * @i: number of times
 * Return: the resulting square root
 */
int real_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (real_sqrt_recursion(n, i + 1));
}

