#include "main.h"

/**
 * print_diagonal - a def
 * @n:int
 * Return: Always 0 or 1
 */

void print_diagonal(int n)
{
int n = -5;
if (n < 1)
putchar('\n');
for (int i = 0; i<n; i++)
{
int j = 0;
while (j < i)
{
putchar(' ');
j++;
}
putchar('\\');
putchar('\n');
}
}

