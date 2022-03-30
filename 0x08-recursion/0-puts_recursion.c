#include "main.h"

/**
 *_puts_recursion - prints a string, followed by newline
 *
 * @s: string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s < '\0')
	{	
		_putchar(*s);
		_puts_recursion(s + 1);

	return (s);
	}

	else
	{
		_putchar('\n');
	}
	return
}
