#include "main.h"

/**
 * _strlen - a def that does something.
 * @s: char.
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}
return (length / 2);
}

/**
 * puts_half - a def that does something.
 * @str: char.
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
int num = _strlen(str);
char part = str[num];

while (part)
{
_putchar(part);
num++;
part = str[num];
}
_putchar('\n');
}
