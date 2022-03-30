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
	int i = 0;

	if (s[i] < '\0')
	{	
		_putchar(s[i]);
		i++;
		_puts_recursion(s + (i + 1));
	}
	else
	{
		_putchar('\n');
	}
	return
}
