#include "main.h"

/**
 * _sqrt_recursion- returns the natural square root of a number
 * @n: number
 *
 * Return: -1 or 0
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt- square root
 * @n: number
 *
 * @a: number
 *
 * Return: 0
 */

int _sqrt(int n, int a)
{
	if (n < 0 || (a * a) > n)
		return (-1);
	if (a * a == n)
		return (a);
	else
		return (_sqrt(n, a + 1));
}
