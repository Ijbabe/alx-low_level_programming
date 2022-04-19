#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index-function that searches for an integer.
 * @array: array
 * @size: size
 * @cmp: function pointer
 *
 * Description: size is the number of elements in the array
 * cmp is a pointer to the function to be used to compare values
 * int_index returns the index of the first element
 * for which the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}
	return (-1);
}
