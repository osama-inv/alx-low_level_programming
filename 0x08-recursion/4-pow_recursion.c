#include "main.h"

/**
 * _pow_recursion - a def that does something.
 * @x: char.
 * @y: char.
 * Return: Always 0 (Success)
 */

int _pow_recursion(int x, int y)
{
if (y == 1)
return (x);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y-1));
}

