#include <stdlib.h>
#include "main.h"

/**
 * _strdup- returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	int j, size;
	char *cpr;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size]; size++)
	{
	}
	size += 1;
	cpr = (char *)malloc(sizeof(char) * size);
	if (cpr == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		cpr[j] = str[j];
	return (cpr);
}
