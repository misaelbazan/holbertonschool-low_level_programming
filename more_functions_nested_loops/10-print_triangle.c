#include "main.h"

/**
 * print_square - Function
 *
 * @size: side of a square
 *
 * Return: Nothing
 */
void print_square(int size)
{
	int side1;
	int side2;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (side1 = 0; side1 < size; side1++)
		{
			for (side2 = 0; side2 < side1; side2++)
			{
				_putchar(35);
			}
			_putchar(35);
			_putchar(10);
		}
	}
}
