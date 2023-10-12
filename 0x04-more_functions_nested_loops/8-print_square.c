#include "main.h"

/**
 * print_square - a def
 * @size:int
 * Return: Always 0 or 1
 */

void print_square(int size)
{

for (int i = 0; i < size; i++)
{
for (int j = 0; j < size; j++)
{
_putchar('#');
}
if (i != size-1)
_putchar('\n');
}
_putchar('\n');
}
