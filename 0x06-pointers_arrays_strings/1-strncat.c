#include "main.h"

/**
 * _strncat - a def that does something.
 * @dest: char.
 * @src: char.
 * @a: char.
 * Return: Always 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
int open = 0;

for (int i = 0; i < 98; i++)
{
if (!*(dest + i) || open)
{
*(dest + i) = *src;
src++;
open++;
if (open == n || !*src)
break;
}
}
return (dest);
}
