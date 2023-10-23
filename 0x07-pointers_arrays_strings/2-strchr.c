#include "main.h"

/**
 * _strchr - a def that does something.
 * @s: char.
 * @c: char.
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
return (s);
s++;
}
return (nullptr);
}
