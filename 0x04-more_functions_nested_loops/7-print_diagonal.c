#include "main.h"

/**
 * print_diagonal - a def
 * @n:int
 * Return: Always 0 or 1
 */

void print_diagonal(int n)
{
int x;
int y;
if (n <= 0)
_putchar('\n');
for (y = 0; y < n; y++)
{
for (x = y; x > 0; x--)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
