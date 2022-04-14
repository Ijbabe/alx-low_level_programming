#include "main.h"

/**
 * print_alphabet_x10 -prints alphabet in lowercase 10 times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int a = 0;
	char alpha = 'a';

	for (a = 0; a <= 10; a++)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
	}
	a++;
}
