#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - The program prints the result of the operation,
 * followed by a new line
 * if the number of arguments is wrong, print Error, exit 98
 * if the operator is none of the above, print Error,exit 99
 * if the user tries to divide (/ or %) by 0, print Error, exit 100
 * @argc: argument count
 * @argv: argument vectors
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*optr)(int int);
	char *geto;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	geto = argv[2];

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*geto == '/' || *geto == '%') && num2 == '0')
	{
		printf("Error\n");
		exit(100);
	}
	optr = get_op_func(argv[2]);
	result = optr(num1, num2);

	printf("%d\n", result);

	return (result);
}


