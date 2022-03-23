#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse,
 * followed by a new line
 *
 * @s: a string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int a, int c, int count = 0;

	while (s[a] != 0)
	{
		a++;
	}
	count = a - 1;

	for (c = 0; c < count; c++)
	{
		_putchar(s[c]);
		c--;
	}
	_putchar("\n");
}
