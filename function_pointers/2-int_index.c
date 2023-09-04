#include "function_pointers.h"

/**
 * int_index - function that takes 3 arguments and goes trough an array
 * @array: array of integers.
 * @size: size of the array
 * @cmp: pointer of the function called from the main.c
 *
 * Return: -1 if size <= 0, and if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
