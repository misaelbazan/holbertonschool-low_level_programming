#include "main.h"

/**
 * print_line - Function
 *
 * @n: Quantity of times that ('_') should be printed
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int spc;
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (spc = 0; spc < i; spc++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar(10);
		}
	}
}
