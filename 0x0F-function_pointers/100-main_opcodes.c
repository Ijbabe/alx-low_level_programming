#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its opcodes
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, int argv[])
{
	int byt, a;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byt = atoi(argv[1]);

	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (a = 0; a < byt; a++)
	{
		if (a == byt - 1)
		{
			printf("%02hhx\n", arr[a]);
			break;
		}
		printf("%02hhx\n", arr[a]);
	}
	return (0);
}
