#include "main.h"

/**
 * _strncat - a def that does something.
 * @dest: char.
 * @src: char.
 * @n: char.
 * Return: Always 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
int open = 0;
int i;

for (i = 0; *src; i++)
{
if (!*(dest + i) || open)
{
*(dest + i) = *src;
src++;
open++;
if (open == n)
break;
}
}
return (dest);
}
