#include "main.h"

/**
 * _print_rev_recursion - a def that does something.
 * @s: char.
 * Return: Always 0 (Success)
 */

void _print_rev_recursion(char *s)
{
if (!*s)
return;
char *send = s;
send++;
_print_rev_recursion(send);
_putchar(*s);
}
