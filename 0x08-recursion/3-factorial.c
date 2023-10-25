#include "main.h"

/**
 * factorial - a def that does something.
 * @n: char.
 * Return: Always 0 (Success)
 */

int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 1 || n == 0)
return (1);
return (n * factorial(n - 1));
}
