#include "main.h"
#include <stdio.h>

/**
 * print_array - print array, printing each member
 *
 * @a: pointer of the array
 *
 * @n: each address of the array
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
