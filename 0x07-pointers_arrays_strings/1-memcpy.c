#include "main.h"

/**
 * _memset - a def that does something.
 * @s: char.
 * @b: char.
 * @n: char.
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;
while (n--)
{
dest[i] = src[i];
i++;
}
return (dest);
}
