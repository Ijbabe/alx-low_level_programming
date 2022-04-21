#include "variadic_functions.h"

/**
 * print_strings- prints string followed by new line
 * where separator is the string to be printed between the strings
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * @n: numbers
 * @separator: separator
 *
 * Return:0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pr;
	unsigned int i = 0;
	char *done;

	if (separator == NULL)
		return;
	va_start(pr, n);
	for (i = 0; i < n; i++)
	{
		done = va_arg(pr, char *);
	if (done != NULL)
	{
		printf("%s", done);
	else
		printf("(nil)");
	}
	if (i != (n - 1))
	{
		printf("%s", separator);
	}
	}
	printf("\n");
	va_end(pr);
}
