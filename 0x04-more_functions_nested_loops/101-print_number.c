#include "main.h"

/**
 * print_number - a def
 * @n:int
 * Return: Always 0 or 1
 */

void print_number(int n)
{
int smaller;

if (n < 0)
{
smaller = 1;
n *= -1;
}

if (n == 0)
_putchar('0');
else
{
int rev = 0;

while (n)
{
rev *= 10;
rev += n % 10;
n /= 10;
}
if (smaller)
_putchar('-');
while (rev)
{
_putchar('0' + rev % 10);
rev /= 10;
}
}
}
