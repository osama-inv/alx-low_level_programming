#include "main.h"

/**
 * print_number - a def that does something.
 * @n: char.
 * Return: Always 0 or 1
 */

void print_number(int n)
{
int divisor;
int digit;
if (!divisor)
divisor = 1;
if (n < 0) {
_putchar('-');
n = -n;
}
while (n / divisor >= 10) { d = 100
divisor *= 10;
}
while (divisor != 0) {
digit = n / divisor;
_putchar(digit + '0');
n %= divisor; // 22
divisor /= 10; // 10
}
}
