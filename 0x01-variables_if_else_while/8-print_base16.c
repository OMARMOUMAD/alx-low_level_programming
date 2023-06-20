#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int m = 97;
for (n = 0 ; n <= 9; n++)
{
putchar(n + 48);
}
while (m <= 102)
{
putchar(m);
m++;
}
putchar('\n');
return (0);
}
