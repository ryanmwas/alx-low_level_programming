#include "main.h"
/**
* print_last_digit - prints last digit of a number
* @n: digit
*
* Return: last value
*/
int print_last_digit(int n)
{
int last_digit;

if (n < 0)
{
last_digit = -n % 10;
}
else
{
last_digit = n % 10;
}
_putchar('0' + last_digit);
return (last_digit);
}
