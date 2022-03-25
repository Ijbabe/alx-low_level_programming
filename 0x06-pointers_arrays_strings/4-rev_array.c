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
	int i, b, t;

	for (i = 0; i < n - 1; i++)
	{
		for (b = i + 1; b > 0, b--;)
		{
			t = *(a + b);
			*(a + b) = *(a + (b - 1));
			*(a + (b - 1)) = t;
		}
	}
}
