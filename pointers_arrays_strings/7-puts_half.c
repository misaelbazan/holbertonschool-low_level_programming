#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - function that prints on screen
 *
 * @str: string that would be avaluated
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i;
	int length = strlen(str);

	for (i = length / 2; i <= length -1; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
