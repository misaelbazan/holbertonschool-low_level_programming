#include "main.h"

/**
 * print_numbers - function
 *
 * @c: integer to execute the iteration
 *
 * Return: Nothing
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
