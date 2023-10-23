#include "main.h"

/**
 * print_diagsums - a def that does something.
 * @a: char.
 * @size: char.
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{

int sum_1 = 0;
int sum_2 = 0;
int row, i;

for (row = 0; row < size; row++)
{
i = (row * size) + row;
sum_1 += a[i];
}

for (row = 1; row <= size; row++)
{
i = (row * size) - row;
sum_2 += a[i];
}

printf("%d, %d\n", sum_1, sum_2);
}
