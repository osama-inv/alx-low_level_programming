#include "main.h"

/**
 * isSeparator - a def that does something.
 * @a: char.
 * Return: Always 0 (Success)
 */

int isSeparator(char sep);
{
if (sep == ' ' || sep == '\t' || sep == '\n' || sep == ','
|| sep == ';' || sep == '.' || sep == '!' || sep == '?' ||
sep == '"' || sep == '('  || sep == ')' || sep == '{' || sep == '}')
return (1);
return (0);
}

/**
 * cap_string - a def that does something.
 * @a: char.
 * Return: Always 0 (Success)
 */

char *cap_string(char *a)
{
int *pour = a;

while (*a != '\0')
{
if (*a >= 'a' && *a <= 'z' && isSeparator(*(a - 1)))
*a -= ' ';
a++;
}
return (pour);
}
