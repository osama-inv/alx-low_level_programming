#include "main.h"

/**
 * _strchr - a def that does something.
 * @s: char.
 * @c: char.
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
while (*s != c && *s)
s++;
if (c == *s)
return (s);
return (NULL);
}
