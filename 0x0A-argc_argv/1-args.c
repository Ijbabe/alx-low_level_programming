#include <stdio.h>

/**
 * main- prints number of arguments
 * followed by newline
 * @argc: count of arguments
 *
 * @argv: array
 *
 * Return: 0
 */

int main(int argc, char *argv __attribute__((unused)))
{
	int i;

	for (i = 0, i < argc, i++)
	{
		printf("%d\n", argc);
		return (0);
	}
}
