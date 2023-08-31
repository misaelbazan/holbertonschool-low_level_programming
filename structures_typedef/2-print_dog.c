#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that provides a structure using dog str
 *
 * @d: received a strcut initialized
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	const char *NIL = "nil";

	if (d == NULL)
	{
		return;
	}
	if ((*d).name == NULL)
	{
		printf("Name: (%s)\n", NIL);
	}
	else
	{
		printf("Name: %s\n", (*d).name);
	}

	printf("Age: %f\n", (*d).age);

	if ((*d).owner == NULL)
	{
		printf("Owner (%s)\n", NIL);
	}
	else
	{
		printf("Owner %s\n", (*d).owner);
	}
}
