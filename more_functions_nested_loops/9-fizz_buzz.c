#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	int contador;

	for (contador = 1; contador <= 100; contador++)
	{
		if (contador % 3 == 0 && contador % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (contador % 3 != 0 && contador % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (contador % 3 == 0 && contador % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", contador);
		}
	}
	return (0);
}
