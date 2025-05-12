#include <stdio.h>
/**
* main - prints single digit characters
*
* Return: 0
*/
int main(void)
{
char num = '0';
while (num <= '9')
{
putchar(num);
num++;
}
putchar('\n');
return (0);
}
