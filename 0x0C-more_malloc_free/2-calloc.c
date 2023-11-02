#include <stdlib.h>
/**
 * _memset - fills memory with 0
 *
 * @s: input pointer
 * @b: characters
 * @n: number of bytes
 *
 * Return: A pointer to the array
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
/**
 * _calloc - fills memory with 0
 *
 * @nmemb: input pointer
 * @size: characters
 * Return: A pointer to the array
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *arr;

if (size == 0 || nmemb == 0)
return (NULL);
arr = malloc(nmemb * size);
if (arr == NULL)
return (NULL);
_memset(arr, 0, nmemb * size);
return (arr);
}
