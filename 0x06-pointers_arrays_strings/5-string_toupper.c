#include "main.h"

/**
 * string_toupper - a def that does something.
 * @str: char.
 * Return: Always 0 (Success)
 */

char *string_toupper(char *str)
{
int *pour = str;

while (*str != '\0')
{
if (*str >= 'a' && *str <= 'z')
*str -= ' ';
str++;
}

return (pour);
}
