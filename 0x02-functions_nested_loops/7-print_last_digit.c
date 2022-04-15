#include "main.h"

/**
 * print_last_digit- print last digit of number
 * @n: number
 *
 * Return: 0
 */

int print_last_digit(int n)
{
	int digit = n % 10;

	_putchar(digit);
	return (digit);
}
