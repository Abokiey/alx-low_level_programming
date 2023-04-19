#include "3-calc.h"


int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);


/**
 * op_add - sum of two numbers.
 * @a: 1st number.
 * @b: 2nd number.
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference of two numbers.
 * @a: 1st number.
 * @b: 2nd number.
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - product of two numbers.
 * @a: 1st number.
 * @b: 2nd number.
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of two numbers.
 * @a: 1st number.
 * @b: 2nd number.
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - division of two numbers.
 * @a: 1stnumber.
 * @b: 2nd number.
 *
 * Return: division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

