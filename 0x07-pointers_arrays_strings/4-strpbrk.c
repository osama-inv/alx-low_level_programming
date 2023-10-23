#include "main.h"

/**
 * _strpbrk - a def that does something.
 * @s: char.
 * @accept: char.
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *a = accept;
while (*a)
{
if (*a == *s)
return (s);
a++;
}
s++;
}
return (NULL);
}
