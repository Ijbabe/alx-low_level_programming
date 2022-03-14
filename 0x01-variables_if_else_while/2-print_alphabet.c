#include <stdio.h>

/**
 * main -  prints the alphabet in lowercase
 * followed bya new lin
 * Return: Always 0 (Success)
 */

int main(void)
{
	char fh;

	for (fh = 'a'; fh <= 'z';)
	{
		putchar(fh);
		fh++;
}
	putchar('\n');
	return (0);
	}
