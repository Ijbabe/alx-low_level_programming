#include "variadic_functions.h"

/**
 * print_all- print anything
 * @format: specifier formats
 *
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	va_list entry;
	unsigned int a = 0, b = 0, c = 0;
	const char sarg[] = "cifs";
	char *pr;

	va_start(entry, format);
	while (format && format[a])
	{
		while (sarg[b])
		{
			if (format[a] == sarg[b] && c)
			{
				printf(",");
				break;
			} b++;
		}
		switch (format[a])
		{
		case 'c':
			printf("%c", va_arg(entry, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(entry, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(entry, double)), c = 1;
			break;
		case 's':
			pr = va_arg(entry, char *), c = 1;
			if (!pr)
			{
				printf("(nil)");
				break;
			}
			printf("%s", pr);
			break;
		} a++;
		printf("\n");
		va_end(entry);
	}
}
