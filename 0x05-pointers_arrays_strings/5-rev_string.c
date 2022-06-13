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
	int a = 0;

	while (s[a] != 0)
	{
		a++;
	}
	a--;
	while (s[a] >= 0)
	{
		a--;
	}
}
