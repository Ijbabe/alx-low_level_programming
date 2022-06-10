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
	char up = 65;

	for (; up <= 90; up++)
	{
		if (c == up)
			return (1);
		else
			return (0);
	}
}
