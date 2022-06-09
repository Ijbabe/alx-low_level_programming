#include "main.h"

/**
 * times_table- prints the 9 times table, starting with 0
 * Return: 0
 */

void times_table(void)
{
	int col, row, ten, unit, num;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			num = row * col;
			ten = num / 10;
			unit = num % 10;

			if (col == 0)
			{
				_putchar('0');
			}
			else if (num < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(unit + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(ten + '0');
				_putchar(unit + '0');
			}
		}
		_putchar('\n');
	}
}
