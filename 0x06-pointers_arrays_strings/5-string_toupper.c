#include "main.h"
#include <string.h>

/**
 * string_toupper- change all lowercase letters to uppercase
 * @s: string
 *
 * Return: string
 */

char *string_toupper(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
	{
		if (*(s + a) >= 97 && *(s + a) <= 122)
			*(s + a) = *(s + a) - 32;
		a++;
	}
	return (s);
}
