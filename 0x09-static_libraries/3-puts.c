#include "main.h"

/**
 * _puts - a def that does something.
 * @str: char.
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{

while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
