#include <stdio.h>

/**
 * main - prints all possible combinations of three digits
 * Return: 0
 */

int main(void)
{
	int a, b, c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '1'; b <= '9'; b++)
		{
			for (c = '2'; c <= '9'; c++)
			{
				if (c > b && b > a)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != '7' || b != '8')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
