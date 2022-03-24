#include "main.h"
#include <string.h>

/**
 * _strncat- concatenates two strings.
 *
 * @dest: destination
 *
 * @src: source.
 *
 * @n: bytes
 *
 *Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (*(dest + a) != '\0')
	{
		a++;
	}

	while (b < n)
	{
	*(dest + a) = *(src +  b);
		if (*(src + b) == '\0')
			break;
		a++;
		b++;
	}
	return (dest);
}
