#include "main.h"

/**
 * _strstr - a def that does something.
 * @haystack: char.
 * @needle: char.
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
return (haystack);

while (*haystack)
{
char *a = needle;
if (*a == *haystack)
{
int i = 0;
while (*a)
{
if (*a != *(haystack + i))
break;
i++;
a++;
}
if (*a == '\0')
return (haystack);
}
haystack++;
}
return (NULL);
}
