#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that takes two arguments
 *
 * @name: name of the person
 * @f: function that takes a char pointer as argument
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
