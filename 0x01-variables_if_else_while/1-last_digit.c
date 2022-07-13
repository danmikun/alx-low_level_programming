#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determines either greater than 5, is less than 6, or is 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, rm;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	rm = n % 10;
	/* your code goes there */
	if (rm > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, rm);
	}
	else if (rm == 0)
	{
		printf("Last digit of %d is %d and is 0", n, rm);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, rm);
	}
	return (0);
}
