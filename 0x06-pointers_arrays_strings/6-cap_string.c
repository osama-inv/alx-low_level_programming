#include "main.h"

/**
 * isSeparator - a def that does something.
 * @c: char.
 * Return: Always 0 or 1
 */

int isSeparator(char c);
{
char spts[] = " \t\n,;.!?\"(){}";
int i;
for (i = 0; spts[i]; i++)
if (spts[i] == c)
return (1)
return (0);
}

/**
 * cap_string - a def that does something.
 * @a: char.
 * Return: Always 0 (Success)
 */

char *cap_string(char *a);
{
int capitilize = 1;
int i = 0;
while (a[i])
{
if (isSeparator(a[i]))
capitilize = 1
else if (capitilize)
{
if (a[i] >= 'a' && a[i] <= 'z')
a[i] -= 32;
capitilize = 0;
}
i++;
}
return (a);
}
