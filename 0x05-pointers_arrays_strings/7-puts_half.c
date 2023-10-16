#include "main.h"
#include "2-strlen.c"

/**
 * _strlen - a def that does something.
 * @str: char.
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
int i;
int pp = 0;

if (_strlen(str) % 2 != 0)
{
pp += 1;
}
for (i = (_strlen(str) + pp) / 2; i < _strlen(str); i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
