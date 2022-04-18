#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog- print struct dog
 * @d: variable
 *
 * Description: struct dog
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d.name == NULL)
		d.name = "(nil)";
	if (d.age == NULL)
		d.age = "(nil)";
	if (d.owner == NULL)
		d.owner = "(nil";

	printf("Name: %s\n", d.name);
	printf("Age: %.6f\n", d.age);
	printf("Owner: %s\n", d.owner);
}