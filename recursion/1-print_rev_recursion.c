#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - function that reverses a string
 *
 * @s: string that whill be reverse
 *
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
