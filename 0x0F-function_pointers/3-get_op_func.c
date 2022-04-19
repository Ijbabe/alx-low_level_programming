#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - function that selects correct function to perform
 * @s: the operator user gives
 *
 * Return: 0
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int a = 0;

	while (ops[a].op)
	{
		if (*(ops[a].op) == *s)
			return (ops[a].f);
		a++;
	}
	return (NULL);
}
