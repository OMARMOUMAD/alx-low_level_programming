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
printf("size of char: %zu byte(s)\n", sizeof(char));
printf("size of int: %zu byte(s)\n", sizeof(int));
printf("size of long int: %zu byte(s)\n", sizeof(long int));
printf("size of lon long int: %zu byte(s)\n", sizeof(long long int));
printf("size of float: %zu byte(s)\n", sizeof(float));
return (0);
}
