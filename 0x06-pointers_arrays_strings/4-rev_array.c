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
	int a, b, t;

	for (a = 0; a < n - 1; a++)
	{
		for (b = a + 1; b > 0, b--)
		{
			t = *(a + b);
			*(a + b) = *(a + (b - 1));
			*(a + (b - 1)) = t;
		}
	}
}
