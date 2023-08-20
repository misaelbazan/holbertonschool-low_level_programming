#include "main.h"
#include <math.h>

/**
 * _pow_recursion - Function that returns a square root of x to the pwr of y
 *
 * @x: base number
 * @y: exponent number
 *
 * Return: (-1) if y is less than 0 and (x ^ y) otherwise
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		if (y == 1)
		{
			return (x);
		}
		else
		{
			return (x * _pow_recursion(x, y - 1));
		}
	}
}
