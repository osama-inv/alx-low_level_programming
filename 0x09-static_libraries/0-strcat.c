#include "main.h"

/**
 * _strcat - a def that does something.
 * @dest: char.
 * @src: char.
 * Return: Always 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
int open = 0;
int i;
for (i = 0; i < 98; i++)
{
if (!*(dest + i) || open)
{
*(dest + i) = *src;
src++;
open = 1;
if (!*src)
break;
}
}
return (dest);
}
