#include <stdio.h>
/**
 *main - A program that print the storage size
 *Return: 0 (success)
 */
int main(void)
{
char;
int;
long int;
long long int;
float;
printf("size of char: %zu bytes\n", sizeof(char));
printf("size of int: %zu bytes\n", sizeof(int));
printf("size of long int: %zu bytes\n", sizeof(long int));
printf("size of lon long int: %zu bytes\n", sizeof(long long int));
printf("size of float: %zu bytes\n", sizeof(float));
return (0);
}
