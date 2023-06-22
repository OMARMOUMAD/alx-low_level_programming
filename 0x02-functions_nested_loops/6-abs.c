#include "main.h"
/**
 * _abs - return the absolute value of a given integer.
 * @i: value use to find the absolute value.
 *
 *
 * Return: the absolute value.
 */
int _abs(int i)
{
if (i < 0)
{
int abs_val;
abs_val = i * -1;
return (abs_val);
}
return (i);
}
