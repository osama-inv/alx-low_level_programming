#include "main.h"

/**
 * _strspn - a def that does something.
 * @s: char.
 * @accept: char.
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;

while (*s)
{
char *a = accept;

while (*a)
{
if (*s == *a)
{
n++;
break;
}
a++;
}
if (*a == '\0')
break;
s++;
}
return (n);
}
