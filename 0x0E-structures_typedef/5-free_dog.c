#include <stdlib.h>
#include "dog.h"

/**
 * free_dog- free dogs
 * @d: struct to free
 *
 * Return: 0
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
	}
}
