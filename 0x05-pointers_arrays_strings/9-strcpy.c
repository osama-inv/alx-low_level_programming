#include "main.h"

/**
 * _strcpy - a def that does something.
 * @dest: char.
 * @src: char.
 * Return: Always 0 (Success)
 */

char *_strcpy(char *dest, char *src)
{
char *dest_start = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return dest_start;
}
