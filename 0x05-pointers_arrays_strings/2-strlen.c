#include "main.h"
#include <string.h>

/**
 * _strlen- funtion that prints the lenght of a string
 *
 * @s: lenght of string
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != 0)
	{
		a++;
	}
	return (a);
}
