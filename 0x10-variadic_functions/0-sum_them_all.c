#include "variadic_functions.h"

/**
 * sum_them_all- returns the sum of all its parameters
 * if n == 0 return 0
 * @n: number of integers
 *
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list un;
	unsigned int i = 0;
	int sum = 0;

	va_start(un, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(un, unsigned int);
	va_end(un);
	return (sum);
}
