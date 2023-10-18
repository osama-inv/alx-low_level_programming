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
int dest_len = 0;
int src_len = 0;

while (dest[dest_len] != '\0')
dest_len++;
    

while (src[src_len] != '\0')
src_len++;


int copy_len;
if (n < src_len)
copy_len = n;
else
copy_len = src_len;

for (int i = 0; i < copy_len; i++)
dest[dest_len + i] = src[i];

dest[dest_len + copy_len] = '\0';

return (dest);
}

