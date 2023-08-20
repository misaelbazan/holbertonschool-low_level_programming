#include "main.h"

/**
 * _factorial - function that returns factorial of a given number
 *
 * @n: number given
 *
 * Return: It depends on the condition
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
