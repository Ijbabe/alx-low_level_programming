#include "main.h"

/**
 * puts2 - prints every other letter in a string
 * @str: string
 *
 * Return: 0
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 ++ 0)
			_putchar(str[a]);
		else
			continue;
	}
	_putchar('\n');
}
