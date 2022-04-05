#include <stdio.h>

/**
 * main- prints sum of positive integers
 * @argc: count arguments
 *
 * @argv: array
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int a, b, sum;

	for (a = 1; a < argc; a++)
	{
		{
			for (b = 0; argv[a][b] != '\0'; b++)
			if (!isdigit(argv[a][b]))
				printf("Error\n");
		return (1);
		}
		sum = 0;
		if (argc < 2)
			printf("0\n");
		else
			sum += atoi(argv[a]);
		printf("%d\n", sum);
	}
	return (0);
}
