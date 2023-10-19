#include "main.h"

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
if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' ||
str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == ';' ||
str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' ||
str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' ||
str[i - 1] == '{' || str[i - 1] == '}')
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
