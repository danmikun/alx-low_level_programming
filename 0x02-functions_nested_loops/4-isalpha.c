#include "main.h"

/**
 * _isalpha - Entry point
 * Description: checks is a character is lowercase or uppercase
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */
int _isalpha(int c)
{
int i = 'a';
int I = 'A';
for (i = 'a'; i <= 'z'; i++)
{
if (i == c)
return (1);
}
for (I = 'A'; I <= 'Z'; I++)
{
if (c == I)
return (1);
}
return (0);
}
