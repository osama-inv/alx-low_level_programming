#include "main.h"
#include <stdlib.h>

/**
 * create_array - a def that does something.
 * @size: char.
 * @c: char.
 * Return: Always 0 (Success)
 */

char *create_array(unsigned int size, char c)
{
char* one;
int i;
if (!size)
return (NULL);
one = malloc(size * sizeof(char));
if (one == NULL)
return (NULL);
for (i = 0; i < size; i++)
one[i] = c;

return (one);
}
