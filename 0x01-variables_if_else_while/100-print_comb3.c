#include <stdio.h>

/**
 * main- prints all possible different combinations of two digits.
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 0; a < 100; a++)
	{
		putchar((a / 10) + '0');
		putchar((a % 10) + '0');
		if (a != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
