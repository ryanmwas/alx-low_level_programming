#include "main.h"
/**
* _islower - checks for lowercase character
* @c: character to check
*
* Return: 0 if successful
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
