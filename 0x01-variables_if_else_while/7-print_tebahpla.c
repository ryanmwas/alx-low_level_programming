#include <stdio.h>
/**
* main - prints lowercase letters in reverse
*
* Return: 0
*/
int main(void)
{
char letter = 'z';

while (letter >= 'a')
{
putchar(letter);
letter--;
}
putchar('\n');
return (0);
}
