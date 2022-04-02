#include <stdio.h>

/**
 * main- multiplies two numbers,prints result
 * followed by new line
 * @argc: count arguments
 *
 * @argv: array
 *
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int i, res = 1;

	for (i = 1; i < argc; i++)
		res = res * atoi(argv[i]);
	{
		if (agrc != 3)
			printf("Error\n");
	return (1);
	}

		else
		{
			printf("%d\n", res);
		}
		return (0);
}
