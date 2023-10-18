#include "main.h"

/**
 * reverse_array - a def that does something.
 * @a: char.
 * @n: char.
 * Return: Always 0 (Success)
 */

void reverse_array(int *a, int n)
{
int i;
for (i = 0; i < n/2; i++)
{
int temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}
