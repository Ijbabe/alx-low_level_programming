#include "main.h"

/**
 * _isupper- checks for uppercase
 * @c: character
 *
 * Description: character check
 * Return: 0
 */

int _isupper(int c)
{
	char u = 'A';

	for (; u <= 'Z'; u++)
	{
		if (c != u)
			return (0);
		else
			return (1);
	}
}
