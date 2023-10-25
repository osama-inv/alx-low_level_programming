#include "main.h"

/**
 * _strlen_recursion - a def that does something.
 * @s: char.
 * Return: Always 0 (Success)
 */

int _strlen_recursion(char *s)
{
if (!*s)
return (0);
s++;
return (1 + _strlen_recursion(s));
}
