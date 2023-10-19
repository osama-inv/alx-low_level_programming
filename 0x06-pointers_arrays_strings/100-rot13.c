#include "main.h"

/**
 * rot13 - a def that does something.
 * @str: char.
 * Return: Always 0 or 1
 */

char *rot13(char *str)
{
int i;
for (i = 0; str[i]; i++)
{
char base = 'a';
char c = str[i];

if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z' && (base -= 32)))
str[i] = (c - base + 13) % 26 + base;
}

return (str);
}
