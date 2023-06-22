#include "main.h"
/**
 * print_alphabet_x10 - write alphabet x10.
 *
 * Return:void.
 */
void print_alphabet_x10(void)
{
int i;
char n;
i = 0;
while (i < 10)
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar (n);
}
_putchar ('\n');
i++;
}
}
