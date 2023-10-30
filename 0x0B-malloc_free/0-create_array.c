#include "main.h"

/**
 * create_array - a def that does something.
 * @size: char.
 * @c: char.
 * Return: Always 0 (Success)
 */

char *create_array(unsigned int size, char c)
{
if (!size)
return (NULL);
char* one = malloc(size * sizeof(char));
if (one == NULL)
return (NULL);
int i;
for (i = 0; i < size; i++)
one[i] = c;

return (one);
}
