#include "main.h"

/**
 * _memset - a def that does something.
 * @s: char.
 * @b: char.
 * @n: char.
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;

while (n--)
s[i++] = b;

return (s);
}
