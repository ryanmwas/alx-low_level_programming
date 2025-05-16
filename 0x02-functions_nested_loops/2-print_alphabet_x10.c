#include "main.h"
/**
* print_letters - print lowercase alphabets
*
* Return: none
*/
void print_letters(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
void print_letters(void);
/**
* print_alphabet_x10 - prints lowercase alphabet 10 times
*
* Return: none
*/
void print_alphabet_x10(void)
{
int counter = 0;
while (counter < 10)
{
print_letters();
counter++;
}
}
