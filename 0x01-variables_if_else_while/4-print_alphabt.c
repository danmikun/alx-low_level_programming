#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase\n
 * Return: Always 0 (success)
 */
int main(void)
{
int lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
	if (lc != 'e' && lc != 'q')
	{
	putchar(lc);
	}
	}
	putchar('\n');
	return (0);
}
