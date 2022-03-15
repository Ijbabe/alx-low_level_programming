#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: 0 (Success)
 */

int main(void)
{
	int a;
	char fh;

	for (a = 48; a < 58; a++)
	{
	putchar(a);
	}

	for (fh = 'a'; fh <= 'f'; fh++)
	{
	putchar(fh);
	}
	putchar('\n');
	return (0);
}
