#include "main.h"
#include <string.h>

/**
 * reverse_array- reverses the content of the array
 * @a: array
 *
 * @n: number of integers
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int b = 0, t;

	n = n - 1;
	while (b < n)
	{
		t = *(a + b);
		*(a + b) = *(a + n);
		*(a + n) = t;
		b++;
		n--;
	}
}
