#include "main.h"
/**
* print_diagonal - draw diagonal line in the terminal
* @n: length of diagonal line
*/
void print_diagonal(int n)
{
int i, j;

if (n <= 0)
{
_putchar('\n');
}
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
