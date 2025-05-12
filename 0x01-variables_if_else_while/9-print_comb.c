#include <stdio.h>
/**
* main - prints single digit characters
*
* Return: 0
*/
int main(void)
{
int num = 0;
while (num <= 9)
{
putchar('0' + num);
if (num < 9)
{
putchar(',');
putchar(' ');
}
num++;
}
return (0);
}
