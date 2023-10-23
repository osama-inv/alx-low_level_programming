#include "main.h"

/**
 * _strchr - a def that does something.
 * @s: char.
 * @c: char.
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
int *ptr = s;
while (*ptr)
{
if (*ptr == c)
return (ptr);
ptr++;
}
return (NULL);
}
