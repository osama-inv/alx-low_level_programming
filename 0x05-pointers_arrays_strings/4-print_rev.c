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

return (length);
}

/**
 * print_rev - a def that does something.
 * @s: char.
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
int len = _strlen(s);
while (len--)
{
putchar(s[len]);
}
putchar('\n');

}
