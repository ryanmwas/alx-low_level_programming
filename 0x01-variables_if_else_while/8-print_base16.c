#include <stdio.h>
/**
* main - prints base 16 numbers
*
* Return: 0 if successful
*/
int main(void)
{
char base_digits = '0';

while (base_digits <= '9')
{
putchar(base_digits);
base_digits++;
}
base_digits = 'a';
while (base_digits <= 'f')
{
putchar(base_digits);
base_digits++;
}
putchar('\n');
return (0);
}
