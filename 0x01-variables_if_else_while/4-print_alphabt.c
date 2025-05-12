#include <stdio.h>
/**
* main - prints lowercase alphabets
*
* Return: 0 if successful
*/
int main(void)
{
char letters = 'a';

while (letters <= 'z')
{
if (letters == 'q' || letters == 'e')
{
letters++;
continue;
}
putchar(letters);
letters++;
}
putchar('\n');
return (0);
}
