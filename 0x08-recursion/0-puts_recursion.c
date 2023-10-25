#include "main.h"

/**
 * _puts_recursion - a def that does something.
 * @s: char.
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
if (!*s)
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
