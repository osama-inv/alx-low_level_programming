#include "main.h"

/**
 * print_array - a def that does something.
 * @a: char.
 * @n: char.
 * Return: Always 0 (Success)
 */

void print_array(int *a, int n)
{
int rate = 0;
if (n <= 0)
putchar('\n');
while ((n > 0) && (n--))
{
if (n > 0)
printf("%d, ", a[rate++]);
else
printf("%d\n", a[rate++]);
}
}
