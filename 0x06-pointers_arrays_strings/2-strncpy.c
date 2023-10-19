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
int finished = 0;
for (i = 0; i < n; i++)
{
if (src[i] == '\0')
finished = 1;
if (src[i] != '\0' && !finished)
dest[i] = src[i];
else
dest[i] = '\0';
}
return (dest);
}
