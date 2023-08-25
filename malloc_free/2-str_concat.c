#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concats input
 *
 * @s1: first parameter to concat
 * @s2: second parameter to concat
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, ci;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	i = ci = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[i] != '\0')
	{
		ci++;
	}
	concat = malloc(sizeof(char) * (i + ci + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	i = ci = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	while (s2[i] != '\0')
	{
		concat[i] = s2[ci];
		i++, ci++;
	}
	concat[i] = '\0';
	return (concat);
}
