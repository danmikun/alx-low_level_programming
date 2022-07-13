#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints numbers from 0 to 9 with a comma in between\n
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
	for (i = 0 ; i < 10 ; i++)
	{
	printf("%d, ", i);
	if (i == 8)
	{
	printf("9");
	break;
	}
	}
	putchar('\n');
	return (0);
}
