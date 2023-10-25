#include "main.h"

/**
 * getlast - a def that does something.
 * @c: char.
 * Return: Always 0 (Success)
 */
char *getlast(char *c)
{
if (*c && *(c + 1))
return getlast(c + 1);
return (c);
}
/**
 * getans - a def that does something.
 * @l: char.
 * @f: char.
 * Return: Always 0 (Success)
 */
int getans(char *f, char *l)
{
if (*f == *l)
{
if (f == l || (f + 1) == l)
return (1);
return getans(f + 1, l - 1);
}
return (0);
}
/**
 * is_palindrome - a def that does something.
 * @s: char.
 * Return: Always 0 (Success)
 */
int is_palindrome(char *s)
{
char *last = getlast(s);
return getans(s, last);
}
