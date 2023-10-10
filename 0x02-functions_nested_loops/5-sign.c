#include "main.h"
/**
 * print_sign - def Important.
 * @n : a char
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
int i = 1;

if (n > 0)
_putchar('+');
else if (n == 0)
{
_putchar('0');
i = 0;
}else if (n < 0)
{
_putchar('-');
i = -1;
}
return (i);
}

