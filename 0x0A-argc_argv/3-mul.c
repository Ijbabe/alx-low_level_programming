#include <stdio.h>
#include <stdlib.h>

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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
