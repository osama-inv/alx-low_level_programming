#include "main.h"

/**
 * string_toupper - a def that does something.
 * @a: char.
 * Return: Always 0 (Success)
 */

char *string_toupper(char *a)
{
int p = 0;
while (a[p] != '\0')
{
if (a[p] >= 'a' && a[p] <= 'z')
a[p] -= 32;
p++;
}

return (a);
}
