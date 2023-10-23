#include "main.h"

/**
 * _memcpy - a def that does something.
 * @dest: char.
 * @src: char.
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
