#include "main.h"

/**
 * seethat - a def that does something.
 * @s1: char.
 * @s2: char.
 * @charrr: char.
 * Return: Always 0 (Success)
 */

int seethat(char *s1, char *s2, char *charrr)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
if (*s1 == '\0' && *s2 == '*')
return (seethat(s1, s2 + 1, s2 + 1));
if (*s1 == '\0' && *s2 != '\0')
return (0);
if (*s2 == '*')
return (seethat(s1, s2 + 1, s2 + 1));
if (*s1 == *s2)
return (seethat(s1 + 1, s2 + 1, charrr));
else
return (seethat(s1 + 1, charrr, charrr));
}

/**
* wildcmp - a def that does something.
* @s1: char.
* @s2: char.
* Return: Always 0 (Success)
*/

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
else if (*s2 == '*')
return (seethat(s1, (s2 + 1), (s2 + 1)));
else
return (0);
}
