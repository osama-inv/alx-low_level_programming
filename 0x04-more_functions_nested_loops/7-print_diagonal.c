#include "main.h"

/**
 * print_diagonal - a def
 * @n:int
 * Return: Always 0 or 1
 */

void print_diagonal(int n)
{
if (n < 1)
_putchar('\n');
for (int i = 0; i<n; i++)
{
int j = 0;
while (j < i)
{
_putchar(' ');
j++;
}
_putchar('\\');
_putchar('\n');
}
}
