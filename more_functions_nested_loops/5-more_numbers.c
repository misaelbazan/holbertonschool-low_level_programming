#include "main.h"

/**
 * more_numbers - Function
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	int c;
	int n;

	for (n = 0; n <= 9; n++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar('0' + (c / 10));
			}
			_putchar('0' + (c % 10));
		}
		_putchar('\n');
	}
}
