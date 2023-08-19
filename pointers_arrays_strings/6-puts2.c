#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - function that prints on screen
 *
 * @str: string that would be avaluated
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < (int)strlen(str); i += 2)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
