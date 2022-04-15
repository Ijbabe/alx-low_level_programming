#include "main.h"

/**
 * print_last_digit- print last digit of number
 * @n: number
 *
 * Return: 0
 */

int print_last_digit(int n)
{
	int num = n % 10;

	if (n < 0)
	{
		num = n * -1;
		_putchar(num + '0');
		return (num);
	}
	return (0);
}
