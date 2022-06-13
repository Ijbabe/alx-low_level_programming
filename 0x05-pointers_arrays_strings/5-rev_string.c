#include "main.h"

/**
 * rev_string- reverse a string
 * @s: string
 *
 * Description: a string
 * Return: 0
 */

void rev_string(char *s)
{
	int a, b, count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	a = count - 1;
	for (b = 0; b < count; b++)
	{
		s[b] = s[a];
		a--;
	}
}
