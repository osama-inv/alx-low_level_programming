#include "main.h"

/**
 * print_digit - a def that does something.
 * @n: char.
 * Return: Always 0 or 1
 */

void print_digit(int n)
{
if (n >= 10) {
print_digit(n / 10);
}
_putchar('0' + n % 10);
}

/**
 * print_number - a def that does something.
 * @n: char.
 * Return: Always 0 or 1
 */

void print_number(int n) {
if (n < 0) {
_putchar('-');
n = -n;
} else if (n == 0) {
_putchar('0');
return;
}
print_digit(n);
}
