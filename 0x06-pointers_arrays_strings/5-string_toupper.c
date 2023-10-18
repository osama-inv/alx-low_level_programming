#include "main.h"

/**
 * string_toupper - a def that does something.
 * @str: char.
 * Return: Always 0 (Success)
 */

char *string_toupper(char *str)
{
int *pour = str;
int p = 0;
while (pour[p] != '\0')
{
if (pour[p] >= 'a' && pour[p] <= 'z')
pour[p] -= ' ';
p++;
}

return (str);
}
