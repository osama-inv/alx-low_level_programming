#include "main.h"

/**
 * print_triangle - a def
 * @size:int
 * Return: Always 0 or 1
 */

void print_triangle(int size)
{
int i, j;

for (i = 0; i < size; i++)
{
for (j = i; j < size - 1; j++)
{
putchar(' ');
}
for (j = 0; j <= i; j++)
{
putchar('#');
}
putchar('\n');
}
if (!i)
putchar('\n');
}
