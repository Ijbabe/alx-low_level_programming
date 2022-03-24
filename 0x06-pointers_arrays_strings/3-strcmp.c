#include "main.h"
#include <string.h>

/**
 * _strcmp- compares a string
 * @s1: string one
 *
 * @s2: string two
 *
 * Return: 0 if equal, another number if not
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
