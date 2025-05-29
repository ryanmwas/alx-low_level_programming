#include <stdio.h>
/**
* main - FizzBuzz
*
* Return: 0 if successfull
*/
int main(void)
{
int num;

for (num = 1; num <= 100; num++)
{
if (num % 15 == 0)
{
printf("FizzBuzz");
}
else if (num % 10 == 5 || num % 10 == 0)
{
printf("Buzz");
}
else if (num % 3 == 0)
{
printf("Fizz");
}
else
{
printf("%d ", num);
}
printf(" ");
}
printf("\n");
return (0);
}
