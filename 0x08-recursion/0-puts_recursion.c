#include "main.h"

/**
 *_puts_recursion - prints a string, followed by newline
 *
 * @s: string
 *
 * return: void
 */

void _puts_recursion(char *s)
{
	int a = 0;

	if (*s < '\0')
	{
		_putchar(*s);
		_puts_recursion(s + a);
		a++;
	}
	else
	{
		_putchar('\n');
	}
}
