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
	int upper;

	if (c >= 'A' && c <= 'Z')
		upper = 1;
	else
		upper = 0;
	return (upper);
}
