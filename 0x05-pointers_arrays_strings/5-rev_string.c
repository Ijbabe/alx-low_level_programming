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
	char temp;

	while (s[count] != '\0')
	{
		count++;
	}
	a = count - 1;
	for (b = 0; b < a / 2; b++)
	{
		temp  = s[b];
		s[b] = s[a - b - 1];
		s[a - b - 1] = temp;

	}
}
