#include <stdlib.h>
#include "main.h"

/**
 * str_concat- concatenates two strings
 * @s1: string one
 *
 * @s2: string two
 *
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	int a, b, j, k, size;
	char *str;

	if (s1 == NULL)
	       return (NULL);
	if (s2 == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	size = a + b + 1;
	str = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	for (j = 0; j < a; j++)
		str[j] = s1[j];
	for (k = 0; k <= b; j++, k++)
		str[j] = s2[k];
	str[size - 1] = '\0';
	return (str);
}
