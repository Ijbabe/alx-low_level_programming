#include "main.h"
#include <stdio.h>

/**
 * print_to_98- print natural numbers to 98
 * @n: integer
 *
 * Description: gets integer
 * Return: Always 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		printf("%d, ", n);
	n++;
	}
	else if (n >= 98)
	{
		printf("%d, ", n);
	n--;
	}
	printf("\n");
}
