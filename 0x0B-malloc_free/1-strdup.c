#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a def that does something.
 * @str: char.
 * Return: Always 0 (Success)
 */

char *_strdup(char *str)
{
unsigned int i;
char *s;

if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
i++;
s = malloc(i+1 *sizeof(char));
if (s == NULL)
return (NULL);
for (i = 0; str[i]; i++)
s[i] = str[i];
return (s);
}
