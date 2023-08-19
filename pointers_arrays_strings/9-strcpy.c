#include "main.h"
#include <string.h>

/**
 * _strcpy - function that takes a string and copies
 *
 * @dest: destination of the copied string
 * @src: string to be copied
 *
 * Return: dest (string copied)
 */
char *_strcpy(char *dest, char *src)
{
	int iterador;

	for (iterador = 0; src[iterador] != '\0'; iterador++)
	{
		dest[iterador] = src[iterador];
	}
	dest[iterador] = '\0';

	return (dest);
}


