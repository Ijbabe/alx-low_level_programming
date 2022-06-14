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
	int a, count = 0;
	char temp = s[0];

	while (s[count] != '\0')
	{
		count++;
	}
	for (a = 0; a < count; a++)
	{
		count--;
		temp  = s[a];
		s[a] = s[count];
		s[count] = temp;

	}
}
