#include "main.h"

/**
 * print_line - Function
 *
 * @n: Quantity of times that ('_') should be printed
 *
 * Return: Nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar(10);
		}
		_putchar('_');
	}
	_putchar(10);
}
