#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - function that reverses any string.
 *
 * @s: pointer that points the @s variable given in the main file
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int start, end;

	for (start = 0, end = strlen(s) - 1; start < end; start++, end--)
	{
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;
	}
}
