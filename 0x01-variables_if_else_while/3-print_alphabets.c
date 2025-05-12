#include <stdio.h>
/**
* main - prints lowercase and upppercase alphabets
*
* Return: 0 if successful
*/
int main(void)
{
char letters = 'a';
char upper = 'A';

while (letters <= 'z')
{
putchar(letters);
letters++;
}
while (upper <= 'Z')
{
putchar(upper);
upper++;
}
putchar('\n');
return (0);
}
