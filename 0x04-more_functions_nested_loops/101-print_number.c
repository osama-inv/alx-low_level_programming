#include "main.h"

/**
 * print_number - a def
 * @n:int
 * Return: Always 0 or 1
 */

void print_number(int n)
{
int new_n = n;
if (new_n < 0)
{
putchar('-');
new_n *= -1;
}
if (new_n == 0)
putchar('0');
else
{
int rev = 0;

while (new_n)
{
rev *= 10;
rev += new_n % 10;
new_n /= 10;
}
while (rev)
{
putchar('0' + rev % 10);
rev /= 10;
}
}
}
