#include <stdio.h>

/**
 * main - prints lowercase alphabets in reverse
 * followed by new line
 * Return: 0 (Success)
 */

int main(void)
{
	char fh;

	for (fh = 'z'; fh >= 'a'; fh--)
	{
	putchar(fh);
	}
	putchar('\n');
	return (0);
}

