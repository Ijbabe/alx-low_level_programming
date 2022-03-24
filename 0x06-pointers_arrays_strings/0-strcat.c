#include "main.h"
#include <string.h>

/**
 * _strcat- concatenates two strings.
 * @dest: destination
 *
 * @src: source.
 *
 * Return: destination
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(dest + a) != '\0')
	{
		a++;
	}
	while (*(dest + a) = *(src +  b))
	{
	if (*(src + b) == '\0')
		a++;
		b++;
	}
	return (dest);
}
