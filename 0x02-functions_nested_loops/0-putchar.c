#include "main.h"

/**
 * main- prints _putchar
 * Return: 0
 */

int main(void)
{
	char word[9] = "_putchar";
	int a = 0;

	for (a = 0; a < 9; a++)
	{
		_putchar(word[a]);
	}
	_putchar('\n');
	return (0);
}
