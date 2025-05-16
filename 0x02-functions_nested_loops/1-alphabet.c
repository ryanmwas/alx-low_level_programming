#include "main.h"
/**
* print_alphabet - prints lowercase alphabets
*
* Return: 0 if successfule
*/
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
