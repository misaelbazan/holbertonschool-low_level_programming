#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int moduleOfN;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	moduleOfN = n % 10;
	/* your code goes there */
	if (moduleOfN > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, moduleOfN);
	}
	else if (moduleOfN == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, moduleOfN);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, moduleOfN);
	}

	return (0);
}
