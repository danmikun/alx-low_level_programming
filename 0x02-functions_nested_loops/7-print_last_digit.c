#include "main.h"

/**
 * print_last_digit - Entry point
 * Description: print last digit of an integer
 * @n: the integer value it receives
 * Return: 1 if true. 0 if false.
 */
int print_last_digit(int n)
{
int a = n % 10;
if (n < 0)
{
a = a * -1;
}
_putchar(a + '0');
return (a);
}
