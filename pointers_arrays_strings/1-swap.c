#include "main.h"

/**
 * swap_int - Function that changes the values
 *
 * @a: Pointer that is deferencing a
 * @b: Pointer deference b
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}
