#include "main.h"

/**
 * reverse_array - a def that does something.
 * @a: char.
 * @n: char.
 * Return: Always 0 (Success)
 */

void reverse_array(int *a, int n)
{
int *last = (a + n) - 1;
int temp;
int num = n / 2;

while (num--)
{
temp = *a;
*a++ = *last;
*last-- = temp;
}
}
