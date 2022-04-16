#include <stdlib.h>
#include "main.h"

/**
 * create_array- create an array of char
 * initialize a specific char
 * @size: size of array
 *
 * @c: char
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *ary;

	ary = malloc(sizeof(char) * size);
	if (size == 0 || ary == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		ary[j] = c;
	return (ary);
}
