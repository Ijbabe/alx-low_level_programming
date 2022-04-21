#include "variadic_functions.h"

/**
 * print_numbers-prints numbers, followed by a new line.
 * where separator is the string to be printed between numbers
 * If separator is NULL, don’t print it
 * @n: number
 * @separator: string
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i = 0;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
	if (separator && i < n - 1)
		printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
