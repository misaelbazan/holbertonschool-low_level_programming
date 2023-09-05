#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that receives n parameters and sum all of its values
 *
 * @n: number of parameters that will be summarized
 *
 * Return: 0 if n is 0, and sum otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	va_list lista;

	va_start(lista, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(lista, int);
	}
	va_end(lista);

	return (sum);
}
