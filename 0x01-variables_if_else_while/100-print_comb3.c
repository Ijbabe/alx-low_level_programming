#include <stdio.h>

/**
 * main- prints all possible different combinations of two digits.
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * Return: 0
 */

int main(void)
{
	int a, b;

	a = 48;
	b = 48;

	while (b < 58)
	{
		a = 48;
		while (a < 58)
		{
			if (b != a && b < a)
			{
				putchar(b);
				putchar(a);
				if (a == 57 && b == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			a++;
		}
		b++;
	}
	putchar('\n');
	return (0);
}
