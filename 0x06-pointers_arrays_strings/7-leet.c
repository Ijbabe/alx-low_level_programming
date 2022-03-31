#include "main.h"

/**
 * leet- encodes a string into 1337
 * @s: a string
 *
 * Return: string
 */

char *leet(char *s)
{
	int a = 0, b;
	int num[] = {52, 51, 48, 55, 49};
	int lower[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};

	while (*(s + a) != '\0')
	{
		for (b = 0; b < 5; b++)
		{
			if (*(s + a) == lower || *(s + a) == upper)
			{
				*(s + a) = num[b];
			break;
			}
		}
		a++;
	}
	return (s);
}

