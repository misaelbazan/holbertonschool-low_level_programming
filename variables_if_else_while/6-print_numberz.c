#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;

	while (number < 10)

	{
		putchar(number + '0');
		number++;
	}
	putchar(10);

	return (0);
}
