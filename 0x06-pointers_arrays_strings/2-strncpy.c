#include "main.h"

/**
 * _strncpy - a def that does something.
 * @dest: char.
 * @src: char.
 * @n: char.
 * Return: Always 0 (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n; i++)
{
*(dest + i) = *src;
if (!*src)
src--;
src++;
}
return (dest);
}
