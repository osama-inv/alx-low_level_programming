#include "main.h"

/**
 * saperoator - a def that does something.
 * @c: char.
 * Return: Always 0 or 1
 */

int saperoator(char c);
{
char *seperators = ",;.!?\"(){} \n\t";

while (*seperators)
{
if (*seperators++ == c)
return (1);
}
return (0);
}

/**
 * cap_string - a def that does something.
 * @str: char.
 * Return: Always 0 or 1
 */

char *cap_string(char *str)
{
int i = 0;
while (str[i])
{
if (saperoator(str[i]))
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= ('a' - 'A');
}
}
i++;
}
return (str);
}
