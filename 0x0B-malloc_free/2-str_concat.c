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
	char *s;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = " ";
	for (a = 0; a != '\0'; a++)
		;
	for (b = 0; b != '\0'; b++)
		;
	size = a + b + 1;
	s = malloc(sizeof(char) * size);

	for (j = 0; j < a; j++)
		s[j] = s1[j];
	for (k = 0; k < b; k++)
		s[j] = s2[k];
	s[size - 1] = '\0';
	return (s);
}
