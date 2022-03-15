#include <stdio.h>

/**
 * main - prints all possible combinations
 * of single-digit numbers.
 * Return: 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	if (a != 58)
	{
	putchar(a);
	putchar(',');
	putchar(' ');
}
	putchar('\n');
	return (0);
}
