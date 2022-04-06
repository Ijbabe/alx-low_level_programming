#include "main.h"
#include <string.h>

/**
 * _puts- prints a string, followed by new line
 * @str: a string
 *
 * Return: void
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != 0)
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
