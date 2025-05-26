#include "main.h"
/**
* more_numbers - prints numbers 0 to 14 10 times
*/
void more_numbers(void)
{
int line = 0;

while (line < 10)
{
int num = 0;
while (num <= 14)
{
if (num >= 10)
{
_putchar('1');
_putchar(num % 10 + '0');
}
else
{
_putchar(num + '0');
}
num++;
}
_putchar('\n');
line++;
}
}
