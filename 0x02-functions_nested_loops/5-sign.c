#include "main.h"

/**
 * print_sign - Entry point
 * Description: print the sign of a number
 * @n: the integer value it receives
 * Return: 1 if n>0, 0 if n == 0, -1 if n<0
 */
int print_sign(int n)
{
/*int n ;*/
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}

}
