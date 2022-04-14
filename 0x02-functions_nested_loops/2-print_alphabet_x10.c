#include "main.h"

/**
 * print_alphabet_x10 -prints alphabet in lowercase 10 times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int a = 0;
	char ch = 'a';
	
	for (a = 0; a < 10; a++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
