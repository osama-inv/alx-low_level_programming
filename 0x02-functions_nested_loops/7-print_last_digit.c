#include "main.h"
/**
 * print_last_digit - def Important.
 * @i : a char
 * Return: Always 0 (Success)
 */

int print_last_digit(int i)
{
i %= 10;
if (i < 0)
i *= -1;
i += 48;
_putchar(i);
return (i - '0');
}

