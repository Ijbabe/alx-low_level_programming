#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Print all the letters except q and e
 * Return: 0 (Success)
 */

int main(void)
{
	char fh;

	for (fh = 'a'; fh <= 'z'; fh++)
	{
		putchar(fh);
	}
	for (fh = 'A'; fh <= 'Z'; fh++)
	{
		putchar(fh);
	}
	putchar('\n');
	return (0);
}

