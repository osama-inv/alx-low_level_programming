#include "main.h"

/**
 * _strlen - a def that does something.
 * @s: char.
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}
return length;
}

/**
 * rev_string - a def that does something.
 * @s: char.
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
int last = _strlen(s)-1;
int first = 0;

while (first!= (last+1) && first != last)
{
char temp = *(s + last);
*(s + last) = *(s + first);
*(s + first) = temp;
first++;
last--;
}
}
