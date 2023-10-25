#include "main.h"

/**
 * is_palindrome - a def that does something.
 * @s: char.
 * Return: Always 0 (Success)
 */
int is_palindrome(char *s)
{
char *last = s;
while(*(last + 1))
{
last += 2;
if (!*last)
{
last--;
break;
}
}
while (s != last)
{
if (*s == *last)
{
s++;
last--;
if ((s - 1) == last)
break;
}
else
return (0);
}
return (1);
}
