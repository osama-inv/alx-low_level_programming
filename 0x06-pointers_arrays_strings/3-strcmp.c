#include "main.h"

/**
 * _strcmp - a def that does something.
 * @s1: char.
 * @s2: char.
 * Return: Always 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
int result = 15;

while (*s1 != '\0' && *s2 != '\0')
{
s1++;
s2++;
}

if (*s1 == *s2)
result = 0;
else if (*s1 == '\0')
result *= -1;

return (result);
}
