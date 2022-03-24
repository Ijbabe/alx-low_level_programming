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
	int a = 0, rs = 0;

	for (s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	while (s1[i] && (s1[i] == s2[i]))
	{
		i++;
	rs = s1[i] - s2[i];
	}
	return (s1[i] - s2[i]);
}
