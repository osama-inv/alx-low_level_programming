#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a def that does something.
 * @s1: char.
 * @s2: char.
 * Return: Always 0 (Success)
 */

char *str_concat(char *s1, char *s2)
{
int i;
char *full;

if (s1 == NULL && s2 == NULL)
return (NULL);

if (s1 == NULL)
s1 = "\0";
if (s2 == NULL)
s2 = "\0";
i = 0;
for (; *s1 || *s2;)
{
if (*s1 && *s2)
i += 2;
else
i++;
if (*s1)
s1++;
if (*s2)
s2++;
}
full = malloc((i + 1) * sizeof(char));

full[i--] = '\0';
if (*s1-1)
s1--;
if (*s2-1)
s2--;
for (; *s1 || *s2;)
{
if (*s2)
full[i--] = *s2--;
else if (*s1)
full[i--] = *s1--;
}
return (full);
}
