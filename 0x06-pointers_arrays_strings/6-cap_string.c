#include "main.h"

/**
 * isSeparator - a def that does something.
 * @str: char.
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
 * @str: char.
 * Return: Always 0 (Success)
 */

char *cap_string(char *str)
{
int *pour = str;

while (*str != '\0')
{
if (*str >= 'a' && *str <= 'z' && isSeparator(*(str - 1)))
*str -= ' ';
str++;
}
return (pour);
}
