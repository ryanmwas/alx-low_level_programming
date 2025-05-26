#include "main.h"
/**
* print_line - draws straight line in terminal
* @n: length of line
*/
void print_line(int n)
{
if (n > 0)
{
int len = 0;
while (len <  n)
{
_putchar('_');
len++;
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
