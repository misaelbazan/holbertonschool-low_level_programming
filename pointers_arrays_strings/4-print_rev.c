#include "main.h"
#include <string.h>

/**
 * print_rev - function that reverse the string
 *
 * @s: input string
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}
