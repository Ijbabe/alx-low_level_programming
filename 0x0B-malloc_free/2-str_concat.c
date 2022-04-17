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
	int a, b, j, k, s1_ln, s2_ln, size;
	char *s;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = " ";
	for (a = 0; a != '\0'; a++)
		s1_ln[a] = a;
	for (b = 0; b != '\0'; b++)
		s2_ln[b] = b;
	size = s1_ln + s2_ln + 1;
	s = malloc(sizeof(char) * size);

	for (j = 0; j < s1_ln; j++)
		s[j] = s1_ln[j];
	for (k = 0; k < s2_ln; k++)
		s[s1_ln + j] = s2_ln[k];
	s[size - 1] = '\0';
	return (s);
}
