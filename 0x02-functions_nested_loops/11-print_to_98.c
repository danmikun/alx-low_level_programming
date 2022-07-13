#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - check the code
 *@n: the integer value it receives
 * Return: Always 0.
 */
void print_to_98(int n)
{
if (n <= 98)
{
int i;
i = n;
while (i < 98)
{
printf("%d, ", i);
i++;
}
}
else
{
int i;
i = n;
while (i > 98)
{
printf("%d, ", i);
i--;
}
}
printf("98\n");
}
