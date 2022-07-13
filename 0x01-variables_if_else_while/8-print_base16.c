#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints numbers in base 16\n
 * Return: Always 0 (success)
 */
int main(void)
{
char a;
for (a = 48 ; a < 58 ; a++)
	{
	printf("%c", a);
	}
	for (a = 97 ; a < 103 ; a++)
	{
	printf("%c", a);
	}
	putchar('\n');
	return (0);
}
