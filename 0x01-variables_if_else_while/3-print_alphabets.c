#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * and then in uppercase
 * Return: Always 0 (Success)
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
