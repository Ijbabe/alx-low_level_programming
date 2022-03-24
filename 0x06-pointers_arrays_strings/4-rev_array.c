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
	int b = 0, h;

	n = n - 1;
	for (b = 0; b < n; b++)
		h = *(a + b);
		*(a + b) = *(a + n);
		*(a + n) = h;
		a++;
		n--;
}
