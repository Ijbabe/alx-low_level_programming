#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - returns sum of a and b
 * @a: digit one
 * @b: digit two
 *
 * Return: 0
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: digit one
 * @b: digit two
 *
 * Return: 0
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product
 * @a: digit one
 * @b: digit two
 *
 * Return: 0
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns result of division
 * @a: digit one
 * @b: digit two
 *
 * Return: 0
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division
 * @a: digit one
 * @b: digit two
 *
 * Return: 0
 */

int op_mod(int a, int b)
{
	return (a % b);
}
