#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
/**
 * main - prints the size of all types
 *
 * Return: 0 if successful
 */
int main(void)
{
printf("Size of a char: %lu bytes(s)\n", sizeof(char));
rintf("Size of an int: %lu bytes(s)\n", sizeof(int));
printf("Size of a long: %lu bytes(s)\n", sizeof(long));
printf("Size of a long long int: %lu bytes(s)\n", sizeof(long long int));
printf("Size of a float: %lu bytes(s)\n", sizeof(float));
return (0);
}
