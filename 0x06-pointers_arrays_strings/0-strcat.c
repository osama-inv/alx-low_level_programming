#include "main.h"

/**
 * _strcat - a def that does something.
 * @dest: char.
 * @src: char.
 * Return: Always 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
int *dest_back = dest;
int open = 0;

for (int i = 0; i < 98; i++)
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
return (dest_back);
}
