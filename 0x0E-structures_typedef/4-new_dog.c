#include <stdlib.h>
#include "dog.h"

/**
 * cp- copies argument
 * @s: source
 *
 * Return: 0
 */

char *_cp(char *s)
{
	char *pr; /* destination */
	int i, j;

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; s[i] != '\0'; i++)
		;
	pr = malloc(sizeof(char) * i + 1);

	if (pr == NULL)
	{
		return (NULL);
	}
	for (j = 0; s[j] != '\0'; j++)
	{
		pr[j] = s[j];
	}
	pr[i] = '\0';
	return (pr);
}

/**
 * new_dog- copies name and owner
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: new_dog variable
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bingo;
	char *n_name, *n_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	bingo = malloc(sizeof(dog_t));
	if (bingo == NULL)
	{
		return (NULL);
	}
	n_name = _cp(name);
	if (n_name == NULL)
	{
		free(bingo);
		return (NULL);
	}
	bingo->name = n_name;
	bingo->age = age;
	n_owner = _cp(owner);
	if (n_owner == NULL)
	{
		free(bingo->name);
		free(bingo);
		return (NULL);
	}
	bingo->owner = n_owner;
	return (bingo);
}

